#!/bin/sh

sum=0

echo "Adjon meg egy file nevet: "
read filename


	
if [ $filename = "--help" ]
then
	echo "Adjon meg egy filet a program mukodesehez!"
else
	while [ ! -f ~/szaZH1911/$filename ]
	do
		echo -n "Ez a file nem talalhato adjon meg ujat: "
		read filename
	done
	
	for i in `cat ~/szaZH1911/$filename`
	do
		if [ $i -gt 10 ]
		then
			sum=`expr $sum + $i`
		fi
	done
fi


echo $sum