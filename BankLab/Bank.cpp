#include "Bank.h"

Bank::Bank(std::string name) : _name(name)
{
	//comment
}

Bank::~Bank()
{
}

std::string Bank::getName()
{
	return _name;
}