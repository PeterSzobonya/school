#!/bin/sh

filename=$1

cat find */$filename | cut -f 2 -d ';'

