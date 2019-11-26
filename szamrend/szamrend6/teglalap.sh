#!/bin/sh
if [ $# -eq 0 ]; then
	echo "Add meg a parameterkent a teglalap mereteit!"
else 
	sor=$1
	if [ $# -gt 1 ];then
		oszlop=$2
	else
		echo "Sorok szama: $sor"
		echo -n "Oszlopok szama: "
		read oszlop
	fi
	if [ `expr $sor \* $oszlop` -ge 0 ]; then
		h="+"
		b="-"
		if [ $sor -lt 0 -a $oszlop -lt 0 ]; then
			sor=`expr $sor \* -1`
			oszlop=`expr $oszlop \* -1`
		fi
	else
		h="-"
		b="+"
		if [ $sor -lt 0 ]; then
			sor=`expr $sor \* -1`
		else
			oszlop=`expr $oszlop \* -1`
		fi
	fi
	

	for i in `seq $sor`; do
		for j in `seq $oszlop`; do
			if [ $j -eq 1 -o $j -eq $oszlop ]; then
				echo -n $h
			else 
				echo -n $b
			fi
		done
		echo ""
	done 
fi 