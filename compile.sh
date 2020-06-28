#!/bin/sh

function findandcompile(){
	sfiles=();
	for sfile in `find $1 -type f -name "*.c"`; do
		sfiles+=" ${sfile}";
	done
	echo "Compiling ${sfiles} to ${1}/a.out";
	gcc $sfiles -Wall -Werror -o ${1}/a.out;
}

# For each folder compile all `.c` files in the folder to a.out
for dir in `find . -maxdepth 1 -type d -name '*.*' ! -name '.*'`; do
	findandcompile $dir &
done