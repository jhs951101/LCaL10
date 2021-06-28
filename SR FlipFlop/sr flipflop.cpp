#include "sr flipflop.h"
#include "nor.h"
#include "and.h"
#include<iostream>

using namespace std;

SR_FLIPFLOP::SR_FLIPFLOP(){
	this->Q = 0;
}

void SR_FLIPFLOP::setInput(int s, int r, int cp){
	this->S = s;
	this->R = r;
	this->CP = cp;

	this->processing();
}

void SR_FLIPFLOP::processing(){
	
	gate_AND and;
	gate_NOR nor;

	and.setInput(this->S, this->CP);
	nor.setInput( and.getOutput() , this->Q );
	this->not_Q = nor.getOutput();

	and.setInput(this->R, this->CP);
	nor.setInput( and.getOutput() , this->not_Q );
	this->Q = nor.getOutput();

}

void SR_FLIPFLOP::print(){
	cout << "Q(t+1): " << this->Q << endl;
	cout << endl;
}