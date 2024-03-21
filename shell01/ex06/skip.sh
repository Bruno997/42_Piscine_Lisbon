#! /bin/bash

ls -l | awk 'NR%2==1'

#NR (inputed record number) Number of lines 
#% divisor (NR/2)
#== 1 (if is odd) will be 1 and  print the line.