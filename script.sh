#!/bin/bash

echo The number of cores is
grep processor /proc/cpuinfo | wc -l
