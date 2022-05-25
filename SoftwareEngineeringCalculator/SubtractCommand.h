#pragma once
#include "IBaseCommands.h"
class SubtractCommand : public IBaseCommands
{
public:
	int execute(int one, int two);
};

