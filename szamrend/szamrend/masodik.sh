#!/bin/sh

ora=`date +%H`

if [ $ora -lt 10 ]; then
	echo "Jo reggelt!"
elif [ $ora -ge 18 ]; then
	echo "Jo estet!"
else 
	echo "Jo napot!"
fi 

echo -n "Adjon meg egy szamot: "
read szam

fakt=1
for i in `seq $szam`; do
	fakt=`expr $fakt \* $i` 
done 
echo $fakt


n=$1
echo -n $n!=1
fakt=1
for i in `seq 2 $n`; do
	echo -n "*$i"
	fakt=`expr $fakt \* $i`
done
echo fakt