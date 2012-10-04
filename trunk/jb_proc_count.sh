#! /bin/bash

# this file counts the number
# of cpu's in the machine
# and reports the count to the user

# what follows next is a series of
# bash commands

echo "This program counts VM processors"
echo "There are "

more /proc/cpuinfo | grep "processor" | wc -l

echo " processors in this machine"
