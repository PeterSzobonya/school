#!/bin/sh

szam=`cat bemenet`
szam=`expr $szam + 1`
echo $szam
echo $szam > bemenet