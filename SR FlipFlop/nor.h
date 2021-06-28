#include "defaultgate.h"

#pragma once

class gate_NOR : public defaultGate
{
public:
	gate_NOR(void);
	~gate_NOR(void);

	virtual void gateOperation();
};