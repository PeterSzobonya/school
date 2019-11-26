#!/bin/sh

N=$1

if [ $N -ge 1 -a $N -le 9 ]
then
	for i in `seq $N`
	do
		echo -n $i
		k=`expr $i + 1`
		l=1
		seged=`expr $N - 1`
		for j in `seq $seged`
		do
			if [ $k -le $N ]
			then
				echo -n $k
				k=`expr $k + 1`
			else
				echo -n $l
				l=`expr $l + 1`
			fi
		done
		echo ""
	done
else
	echo "A megadott parameter nem megfelelo"
fi 