#!/bin/sh

echo -n "Hogy hivnak: "
read nev

echo "Szia $nev"
echo $0
echo $1
echo $2
echo $3
echo $4
echo $5
echo $6
echo $7
echo $8
echo $9
echo $10
echo $11
echo $12

echo $#
echo $*

echo $alma
alma=sarga
echo $alma

echo -n "Mennyi: "
read mennyi

if [ $mennyi = 42 ]; then
	echo "ugyi"
else
	echo "miert nem?"
fi 

case $mennyi in
	41) echo "majdnem"
	;;
	42) echo "ugyi"
	;;
	*) echo "miert nem?"
	;;
esac 

for i in `seq 2 3 10`; do
	echo $i
done 

i=2
while [ $i -le 10 ]; do
	echo while - $i
	i=`expr $i + 3`
done

i=2
until
echo until - $i
	i=`expr $i + 3`
[ $i -ge 10 ]; do
	echo -n""
done



