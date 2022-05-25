#pragma once
#include "IBaseCommands.h"
class DivideCommand : public IBaseCommands
{
public:
	int execute(int one, int two);
};

