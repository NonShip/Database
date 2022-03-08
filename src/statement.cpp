/*
 *
 *	File Name: statement.cpp
 *	Author: YangFan
 *	Email: NonShip@protonmail.com
 *	Create Time: Tue 08 Mar 2022 11:55:38 PM CST
 *
 */

/* @#define NETWORK to get network lib   @#define C_LIB to get c lib */

#include "../include/statement.hpp"

PrepareResult Statement::prepareStatment(InputBuffer &inputbuff) {
	if (inputbuff.m_buff.compare(0,6,"insert") == 0) {
		std::cout << "insert";
		return PrepareResult::PREPARE_SUCCESS;
	}
	return PrepareResult::PREPARE_SUCCESS;
}
