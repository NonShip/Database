/*
 *
 *	File Name: utilty.cpp
 *	Author: YangFan
 *	Email: NonShip@protonmail.com
 *	Create Time: Sun 06 Mar 2022 10:32:19 AM CST
 *
 */

/* @#define NETWORK to get network lib   @#define C_LIB to get c lib */

#include "../include/utilty.hpp"

void printPrompt(void) {
	std::cout << "db > ";
}


void skipSpcae(std::string &str) {
	str.erase(0, str.find_first_not_of(' '));
}

