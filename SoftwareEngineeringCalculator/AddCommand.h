#pragma once
#include "IBaseCommands.h"
class AddCommand : public IBaseCommands
{
public:
	int execute(int one, int two);
};

