#include "nor.h"

#pragma once

class gate_NOT : public gate_NOR
{
public:
	gate_NOT(void);
	~gate_NOT(void);

	void setInput(unsigned short x);
	virtual void gateOperation();

};