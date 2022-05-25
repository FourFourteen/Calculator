#pragma once
#include "IBaseCommands.h"
class ModCommand : public IBaseCommands
{
public:
	int execute(int one, int two);
};

