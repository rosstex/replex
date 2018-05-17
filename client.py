import hyperdex.admin as adm
import hyperdex.client as cli
import random
a = adm.Admin('127.0.0.1', 1982)
c = cli.Client('127.0.0.1', 1982)

print(a.list_spaces())

def add_space(space, key, attributes=[], subspaces=[], partitions=8, failures=0):
    str = "space {} key {} "
    if len(attributes) > 0:
        str += "attributes "
        for attr in attributes:
            str += str(attr) + ","
    if len(subspaces) > 0:
        for subspace in subspaces:
            str += "subspace "
            for sub_attr in subspace:
                str += str(sub_attr) + ","
    str += "create " + str(partitions) + " partitions "
    str += "tolerate " + str(failures) + " failures"

def ls():
    print(a.list_spaces())

def add_random(space='s'):
    for i in range(10000):
        num = random.randint(-2**63, 2**63-1)
        c.put(space, num, {'f':num, 'u':'u'})

def make_space(name='usertable', key='k', attributes='field1, field2, field3, field4, field5, field6', subspace='field1', partitions=4, failures=1):
    space = 'space {} key {} attributes {} subspace {} create {} partitions tolerate {} failures'\
    .format(name, key, attributes, subspace, partitions, failures)
    print(space)
    a.add_space(space)

def conf():
    print(a.dump_config())

def search():
    print(len(list(c.search('s', {'u':'u'}))))