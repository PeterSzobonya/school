#!/bin/sh

filename=gesztenye.txt
ossz=0

for db in `cat $filename | cut -f 2 -d ";"`;do
	ossz=`expr $ossz + $db`
done 
echo $ossz