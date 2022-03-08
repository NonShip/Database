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
#include <string>

void printPrompt(void);

enum class CommandResult{
	COMMAND_SUCCESS,
	COMMAND_UNRECOGNIZED
};

enum class StatementType {
	STATEMENT_INSERT,
	STATEMENT_SELECT
};

enum class PrepareResult {
	PREPARE_SUCCESS,
	PREPARE_UNRECOGNIZED,
	PREPARE_SYNTAX_ERROR
};

class Row {
public:
	uint32_t m_id;
	std::string m_username;
	std::string m_email;
};
// skip space in front of string
void skipSpcae(std::string &);

#endif
