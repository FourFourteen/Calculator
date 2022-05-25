#pragma once
#include "IBaseCommands.h"
class MultiplyCommand : public IBaseCommands
{
public:
	int execute(int one, int two);
};

