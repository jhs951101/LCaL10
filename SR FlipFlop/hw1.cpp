#include "sr flipflop.h"
#include<iostream>

using namespace std;

int main(){

	SR_FLIPFLOP sr_flipflop;
	int s, r, cp;

	while(true){
		cout << "Input CP, S, and R : ";
		cin >> cp >> s >> r;

		if(s == 1 && r == 1)
			break;

		sr_flipflop.setInput(s, r, cp);
		sr_flipflop.print();
	}

	return 0;
}