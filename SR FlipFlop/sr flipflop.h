#pragma once

class SR_FLIPFLOP
{
public:
	SR_FLIPFLOP();
	void setInput(int s, int r, int cp);
	void processing();
	void print();

private:
	unsigned short CP;
	unsigned short S;
	unsigned short R;
	unsigned short Q;
	unsigned short not_Q;
};