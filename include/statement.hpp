/*
 *
 *	File Name: statement.hpp
 *	Author: YangFan
 *	Email: NonShip@protonmail.com
 *	Create Time: Tue 08 Mar 2022 11:43:26 PM CST
 *
 */

/* @#define NETWORK to get network lib   @#define C_LIB to get c lib */
#ifndef STATEMENT_HPP
#define STATEMENT_HPP

#include "utilty.hpp"
#include "inputBuffer.hpp"

class Statement {
public:
	StatementType m_type;
	Row m_row;
	PrepareResult prepareStatment(InputBuffer &);

};

#endif
