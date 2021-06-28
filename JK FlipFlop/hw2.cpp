#include "jk flipflop.h"
#include<iostream>

using namespace std;

int main(){

	JK_FLIPFLOP sr_flipflop;
	int j, k, cp;

	while(true){
		cout << "Input CP, J, and K : ";
		cin >> cp >> j >> k;

		sr_flipflop.setInput(j, k, cp);
		sr_flipflop.print();
	}

	return 0;
}