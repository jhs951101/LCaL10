#pragma once

class JK_FLIPFLOP
{
public:
	JK_FLIPFLOP();
	void setInput(int j, int k, int cp);
	void processing();
	void print();

private:
	unsigned short CP;
	unsigned short J;
	unsigned short K;
	unsigned short Q;
	unsigned short not_Q;
};