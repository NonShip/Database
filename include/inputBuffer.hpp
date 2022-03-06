/*
 *
 *	File Name: inputBuffer.hpp
 *	Author: YangFan
 *	Email: NonShip@protonmail.com
 *	Create Time: Sun 06 Mar 2022 04:11:39 PM CST
 *
 */

/* @#define NETWORK to get network lib   @#define C_LIB to get c lib */

#ifndef INPUTBUFF_HPP
#define INPUTBUFF_HPP
#include <string>
#include <iostream>
#include "../include/utilty.hpp"


class InputBuffer {
public:
	std::string m_buff{};
	void readInput(void);
	CommandResult processMetaInput(void);
};
	

#endif
