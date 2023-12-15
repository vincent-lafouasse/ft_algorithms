#!/usr/bin/env bash

# install the formatter by running `pip3 install c-formatter-42`
# or `pip3 install --user c-formatter-42` if you don't have root privileges

function norm {
	echo Formatting "$(basename "$1")"
	python3 -m c_formatter_42 <"$1" >temp
	mv temp "$1"
}

SRC_DIR='./src'
H_DIR='./include'

C_FILES=$(find $SRC_DIR -name '*.c')
H_FILES=$(find $H_DIR -name '*.h')

TO_NORM="$C_FILES $H_FILES"

#################################################################

for file in $TO_NORM; do
	norm "$file"
done

clang-format -i test/src/*.c
