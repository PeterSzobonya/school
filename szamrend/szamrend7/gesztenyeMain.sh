#!/bin/sh

filename=gesztenye.txt

if [ $# -ge 2 ]; then
	filename=$2
fi 
melyik=0
menu=0
if [ $# -ge 1 ]; then
	menu=1
	melyik=$1
fi

while
	if [ $menu -eq 0 ]; then
		echo 1. "Datafile ($filename)"
		echo 2. Osszesen
		echo 3. Kik gyujtottek tobbet mint
		echo 4. Kilepes
		read melyik
	fi
	
[ $melyik -ne 4 ]; do
	case $melyik in
		1)
			echo -n "Adja meg a file nevet! : "
			read filename
		;;
		2)
			. ./gesztenye.sh $filename
		;;
		3)
			echo -n "Mekkora a limit? : "
			read db
			. ./gesztenye2.sh $db $filename
		;;
		*)
			echo "Ilyen menupont nincs!"
		;;
	esac
	if [ $menu -eq 1 ]; then
		melyik=4
	fi
done 	