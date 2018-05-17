import os

template = '''#!/bin/sh
SPACE="{space} create {daemons} partitions tolerate {ft} failures"
exec python2 "${{HYPERDEX_SRCDIR}}"/test/runner.py --daemons={daemons} --space="${{SPACE}}" -- \\
     "${{HYPERDEX_BUILDDIR}}"/test/search-stress-test --quiet -h {{HOST}} -p {{PORT}} -k {keytype}
'''

SIMPLE = '''space search key {keytype} number attributes
    bit01, bit02, bit03, bit04, bit05, bit06, bit07, bit08,
    bit09, bit10, bit11, bit12, bit13, bit14, bit15, bit16,
    bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24,
    bit25, bit26, bit27, bit28, bit29, bit30, bit31, bit32'''
INDEX='''space search key {keytype} number attributes
    bit01, bit02, bit03, bit04, bit05, bit06, bit07, bit08,
    bit09, bit10, bit11, bit12, bit13, bit14, bit15, bit16,
    bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24,
    bit25, bit26, bit27, bit28, bit29, bit30, bit31, bit32
    index bit01
    index bit02
    index bit03
    index bit04
    index bit05
    index bit06
    index bit07
    index bit08
    index bit09
    index bit10
    index bit11
    index bit12
    index bit13
    index bit14
    index bit15
    index bit16
    index bit17
    index bit18
    index bit19
    index bit20
    index bit21
    index bit22
    index bit23
    index bit24
    index bit25
    index bit26
    index bit27
    index bit28
    index bit29
    index bit30
    index bit31
    index bit32'''
SUBSPACE='''space search key {keytype} number attributes
    bit01, bit02, bit03, bit04, bit05, bit06, bit07, bit08,
    bit09, bit10, bit11, bit12, bit13, bit14, bit15, bit16,
    bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24,
    bit25, bit26, bit27, bit28, bit29, bit30, bit31, bit32
    subspace bit01, bit02, bit03, bit04, bit05, bit06, bit07, bit08
    subspace bit09, bit10, bit11, bit12, bit13, bit14, bit15, bit16
    subspace bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24
    subspace bit25, bit26, bit27, bit28, bit29, bit30, bit31, bit32'''
COMBINATION='''space search key {keytype} number attributes
    bit01, bit02, bit03, bit04, bit05, bit06, bit07, bit08,
    bit09, bit10, bit11, bit12, bit13, bit14, bit15, bit16,
    bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24,
    bit25, bit26, bit27, bit28, bit29, bit30, bit31, bit32
    subspace bit01, bit02, bit03, bit04, bit05, bit06, bit07, bit08
    subspace bit09, bit10, bit11, bit12, bit13, bit14, bit15, bit16
    subspace bit17, bit18, bit19, bit20, bit21, bit22, bit23, bit24
    subspace bit25, bit26, bit27, bit28, bit29, bit30, bit31, bit32
    index bit09
    index bit10
    index bit11
    index bit12
    index bit13
    index bit14
    index bit15
    index bit16
    index bit17
    index bit18
    index bit19
    index bit20
    index bit21
    index bit22
    index bit23
    index bit24
    index bit25
    index bit26
    index bit27
    index bit28
    index bit29
    index bit30
    index bit31
    index bit32
    index bit01
    index bit02
    index bit03
    index bit04
    index bit05
    index bit06
    index bit07
    index bit08'''

configs = [("simple", SIMPLE.format(keytype='int'), 'int', 1, 0),
           ("simple", SIMPLE.format(keytype='int'), 'int', 4, 0),
           ("simple", SIMPLE.format(keytype='int'), 'int', 4, 1),
           ("simple", SIMPLE.format(keytype='string'), 'string', 1, 0),
           ("simple", SIMPLE.format(keytype='string'), 'string', 4, 0),
           ("simple", SIMPLE.format(keytype='string'), 'string', 4, 1),
           ("index", INDEX.format(keytype='int'), 'int', 1, 0),
           ("index", INDEX.format(keytype='int'), 'int', 4, 0),
           ("index", INDEX.format(keytype='int'), 'int', 4, 1),
           ("index", INDEX.format(keytype='string'), 'string', 1, 0),
           ("index", INDEX.format(keytype='string'), 'string', 4, 0),
           ("index", INDEX.format(keytype='string'), 'string', 4, 1),
           ("subspace", SUBSPACE.format(keytype='int'), 'int', 1, 0),
           ("subspace", SUBSPACE.format(keytype='int'), 'int', 4, 0),
           ("subspace", SUBSPACE.format(keytype='int'), 'int', 4, 1),
           ("subspace", SUBSPACE.format(keytype='string'), 'string', 1, 0),
           ("subspace", SUBSPACE.format(keytype='string'), 'string', 4, 0),
           ("subspace", SUBSPACE.format(keytype='string'), 'string', 4, 1),
           ("combination", COMBINATION.format(keytype='int'), 'int', 1, 0),
           ("combination", COMBINATION.format(keytype='int'), 'int', 4, 0),
           ("combination", COMBINATION.format(keytype='int'), 'int', 4, 1),
           ("combination", COMBINATION.format(keytype='string'), 'string', 1, 0),
           ("combination", COMBINATION.format(keytype='string'), 'string', 4, 0),
           ("combination", COMBINATION.format(keytype='string'), 'string', 4, 1),
          ]

for name, space, keytype, daemons, ft in configs:
    fname = 'test/sh/search.{name}.keytype={keytype},daemons={daemons}.fault-tolerance={ft}.sh'.format(name=name, keytype=keytype, daemons=daemons, ft=ft)
    f = open(fname, 'w')
    f.write(template.format(space=space.replace('\n', ' '), keytype=keytype, daemons=daemons, ft=ft))
    f.flush()
    f.close()
    os.chmod(fname, 0755)
