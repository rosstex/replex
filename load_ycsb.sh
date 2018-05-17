#!/bin/bash
java -Djava.library.path=/usr/local/lib/ com.yahoo.ycsb.Client -load -db "org.hyperdex.ycsb.HyperDex" -P /replex/YCSB/workloads/workloada
