#!/bin/sh

./test.sh > test.log 2>&1
grep real test.log | cut -f2 | ./logToTable
