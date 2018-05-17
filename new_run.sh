mkdir daemons/d1
mkdir daemons/d2
mkdir daemons/d3
mkdir daemons/d4
mkdir daemons/d5
mkdir daemons/d6
mkdir daemons/d7
mkdir daemons/d8
mkdir daemons/d9
mkdir daemons/d10
mkdir daemons/d11
mkdir daemons/d12
mkdir coord_data

hyperdex coordinator -d -D coord_data
hyperdex daemon -d -D daemons/d1
hyperdex daemon -d -D daemons/d2
hyperdex daemon -d -D daemons/d3
hyperdex daemon -d -D daemons/d4
hyperdex daemon -d -D daemons/d5
hyperdex daemon -d -D daemons/d6
hyperdex daemon -d -D daemons/d7
hyperdex daemon -d -D daemons/d8
hyperdex daemon -d -D daemons/d9
hyperdex daemon -d -D daemons/d10
hyperdex daemon -d -D daemons/d11
hyperdex daemon -d -D daemons/d12
