#!/bin/bash

N=$1
min=100
max=0
randList

if [ $N -le 100 -a $N -ge 1 ];
then
	for i in `seq $N`
	do
		rand=$(($RANDOM % 100+1))
		echo $rand
		if [ $min -gt $rand ]
		then
			min=$rand
		fi
		
		if [ $max -lt $rand ]
		then
			max=$rand
		fi
	done
	echo `expr $max + $min`
else
	echo nem jo
fi