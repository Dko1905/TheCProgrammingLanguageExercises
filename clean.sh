#!/bin/sh

# For each folder compile all `.c` files in the folder to a.out
for dir in `find . -maxdepth 1 -type d -name '*.*' ! -name '.*'`; do
	rm -v ${dir}/a.out;
done