#!/bin/bash
/replex/cleanup.sh
set -e

screen -dmS "coord" "/replex/coordinator.sh"
sleep 2
echo "coordinator created"
for (( i = 1; i <= "$1"; i++ )); do
	screen -dmLS daemon$i bash -c "/replex/daemon.sh $i && exec bash"
	echo "daemon $i created: $i 500$i"
	sleep 1
done
sleep 1
./client.sh