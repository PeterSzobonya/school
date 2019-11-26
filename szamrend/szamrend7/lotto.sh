#!/bin/bash

szam=`expr $RANDOM % 90 + 1`
lista=$lista""
db=0

while
[ $db -lt 5  ]; do
	szam2=`expr $RANDOM % 90 + 1`
	if [[ $lista != *"$szam2;"* ]]; then
		lista=$lista"$szam2;"
		((db++))
	fi
done 
echo $lista