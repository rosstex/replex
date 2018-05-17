rm -rf /replex/coord_data
rm -rf /replex/daemons/*

mkdir /replex/coord_data
hyperdex coordinator -f -l 127.0.0.1 -p 1982 -D /replex/coord_data