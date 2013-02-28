#!/bin/bash

mpstat $1 $2 > $3

more x | awk 'NR>2 {print $11}'
