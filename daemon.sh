mkdir -p /replex/daemons/d$1
hyperdex daemon -f --listen=127.0.0.1 --listen-port=500$1 \
--coordinator=127.0.0.1 --coordinator-port=1982 --data=/replex/daemons/d$1