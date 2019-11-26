#!/bin/sh

filename=$1


if [ $filename = --help ]
then
	echo "Csak az adatok parameterrel mukodik a program"
else
	while [ ! -f ~/szamrend_gyak/*/$filename ]
	do
		echo "Nem jo adatot adott meg "
		read filename
	done
fi

sum=0
sor=1
for i in `cat ~/szamrend_gyak/*/$filename | cut -f 2 -d ";"`;
do
	class=`cat ~/szamrend_gyak/*/$filename | cut -f 1 -d ";" | head -n $sor | tail -n 1`
	if [ $class = "SzamGepRend" ]
	then
		sum=`expr $sum + $i`
	fi
	sor=`expr $sor + 1`
done 
echo $sum