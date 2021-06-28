#pragma once

class D_FLIPFLOP
{
public:
	D_FLIPFLOP();
	void setInput(int d, int cp);
	void processing();
	void print();

private:
	unsigned short CP;
	unsigned short S;
	unsigned short R;
	unsigned short Q;
	unsigned short not_Q;
};