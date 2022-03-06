/*
 *
 *	File Name: inputBuffer.cpp
 *	Author: YangFan
 *	Email: NonShip@protonmail.com
 *	Create Time: Sun 06 Mar 2022 04:13:14 PM CST
 *
 */

/* @#define NETWORK to get network lib   @#define C_LIB to get c lib */

#include "../include/inputBuffer.hpp"

void InputBuffer::readInput() {
	 getline(std::cin,this->m_buff);
}

CommandResult InputBuffer::processMetaInput(void) {
	if (this->m_buff.compare(".exit") == 0) {
		exit(EXIT_SUCCESS);
	} else if (this->m_buff.compare(".btree") == 0) {
		std::cout << "Tree:\n";
		return CommandResult::COMMAND_SUCCESS;
	}
	return CommandResult::COMMAND_UNRECOGNIZED;
}
