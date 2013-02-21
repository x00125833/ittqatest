#!/bin/bash

#this is a comment

count=`grep 'flags' /proc/cpuinfo | wc -l`

echo you have $count cpus

if [ $1 = "terry" ]; then
	echo hello $1
fi

