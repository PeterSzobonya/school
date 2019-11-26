#!/bin/bash

if [ $# -eq 1 ]
then
	filename=$1
else
	echo -n "adja meg a file nevet: "
	read filename
fi

sor=1
if [ -f $filename ]
then
	numOfLines=`cat $filename | wc -l`
	for i in `seq $numOfLines`
	do
		paratlan=0
		paros=0
		numOfNums=`cat $filename | head -n $i | tail -n 1 | wc -w`
		for j in `seq $numOfNums`
		do
			szam=`cat $filename | head -n $i | tail -n 1 | cut -d' ' -f $j`
			
			if [ `expr $sor % 2` -eq 1 -a `expr $szam % 2` -eq 1 ]
			then
				paratlan=`expr $paratlan + $szam`
			elif [ `expr $sor % 2` -eq 0 -a `expr $szam % 2` -eq 0 ]
			then
				paros=`expr $paros + $szam`
			fi
		done
		if [ `expr $sor % 2` -eq 1 ]
		then
			echo "$sor. sor paratlan szamainak az osszege: $paratlan"
		else
			echo "$sor. sor paros szamainak az osszege: $paros"
		fi
		
		sor=`expr $sor + 1`
	done
else 
	while [ ! -f $filename ]
	do
		echo "Nem megfelelo filenevet adott meg"
		read filename
	done
fi 
