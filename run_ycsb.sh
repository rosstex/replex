#!/bin/bash
java -Djava.library.path=/usr/local/lib/ com.yahoo.ycsb.Client -t -db "org.hyperdex.ycsb.HyperDex" -P /replex/YCSB/workloads/workloada -s -threads 1 -p recordcount=100000 -p operationcount=100000 > workload_res.txt
