#include "d flipflop.h"
#include<iostream>

using namespace std;

int main(){

	D_FLIPFLOP sr_flipflop;
	int d, cp;

	while(true){
		cout << "Input CP and D : ";
		cin >> cp >> d;

		sr_flipflop.setInput(d, cp);
		sr_flipflop.print();
	}

	return 0;
}