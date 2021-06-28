#include "nor.h"

gate_NOR::gate_NOR(void)
{
	setInput(0, 0);
}

gate_NOR::~gate_NOR(void)
{
	
}

void gate_NOR::gateOperation(void)
{
	if(inputX == 1 || inputY == 1)
		result = 0;
	else
		result = 1;
}