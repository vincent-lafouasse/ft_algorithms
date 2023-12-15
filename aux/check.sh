#!/usr/bin/env bash

GREEN='\033[0;32m'
NC='\033[0m'

SRC='./src'
INC='include'

check_norm() {
	norminette "${SRC}" &&
	norminette "${INC}" &&
	echo "${GREEN}===============NORME OK===============${NC}\n"
}

#############################################

check_norm
