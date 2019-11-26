#!/bin/sh

filename=$2
limit=$1
for sor in `cat $filename`; do
	if [ `echo $sor | cut -f 2 -d ";"` -gt $limit ]; then
		echo $sor | cut -f 1 -d ";"
	fi
done 