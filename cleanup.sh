# rm -rf /replex/coord_data
# rm -rf /replex/daemons/*

echo "ran"
killd() {
for session in $(screen -ls | grep -o '[0-9]\{4\}'); do
	screen -S "${session}" -X quit;
done
}
killd
sleep 5