/*
 *
 *	File Name: main.cpp
 *	Author: YangFan
 *	Email: NonShip@protonmail.com
 *	Create Time: Sun 06 Mar 2022 09:51:12 AM CST
 *
 */

/* @#define NETWORK to get network lib   @#define C_LIB to get c lib */

#include "../include/utilty.hpp"
#include "../include/inputBuffer.hpp"

int main(int argc, char *argv[]) {
	InputBuffer inputBuffer;
	while (true) {
		printPrompt();
		inputBuffer.readInput();
		if (inputBuffer.m_buff[0] == '.') {
			switch (inputBuffer.processMetaInput()) {
				case (CommandResult::COMMAND_SUCCESS):
					continue;
				case (CommandResult::COMMAND_UNRECOGNIZED):
					std::cout << "unrecognized command: " << inputBuffer.m_buff << '\n';
					continue;
			}

		}
	};



}
