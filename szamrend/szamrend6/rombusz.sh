#!/bin/sh

rombusz=$1



for i in `seq $rombusz`; do
	for j in `seq $rombusz -1 1`; do
		if [ $j -lt $i ]; then
			echo -n "xx"
		else
			echo -n " "
		fi
	done
	echo ""
done

for i in `seq $rombusz`; do
	for j in `seq $rombusz`; do
		if [ $i -ge $j ]; then
			echo -n " "
		else
			echo -n "xx"
		fi
	done
	echo ""
done 