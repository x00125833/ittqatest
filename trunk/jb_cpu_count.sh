#! /bin/bash

# this scripts reads a file
# and prints the number of CPUs
# in the operating system

echo "there are "

grep processor /proc/cpuinfo | wc -l

echo "processors in this machine "

# next we need a command to count the
# number of lines in a file
