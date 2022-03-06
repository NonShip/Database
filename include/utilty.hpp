/*
 *
 *	File Name: utilty.hpp
 *	Author: YangFan
 *	Email: NonShip@protonmail.com
 *	Create Time: Sun 06 Mar 2022 10:31:09 AM CST
 *
 */

/* @#define NETWORK to get network lib   @#define C_LIB to get c lib */
#ifndef UTILTY_HPP
#define UTILTY_HPP
#include <iostream>

void printPrompt(void);

enum class CommandResult{
	COMMAND_SUCCESS,
	COMMAND_UNRECOGNIZED
};

#endif
