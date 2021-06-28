#include "d flipflop.h"
#include "nor.h"
#include "not.h"
#include "and.h"
#include<iostream>

using namespace std;

D_FLIPFLOP::D_FLIPFLOP(){
	this->Q = 0;
}

void D_FLIPFLOP::setInput(int d, int cp){

	gate_NOT not;
	
	this->S = d;

	not.setInput(d);
	this->R = not.getOutput();
	
	this->CP = cp;

	this->processing();

}

void D_FLIPFLOP::processing(){
	
	gate_AND and;
	gate_NOR nor;

	and.setInput(this->S, this->CP);
	nor.setInput( and.getOutput() , this->Q );
	this->not_Q = nor.getOutput();

	and.setInput(this->R, this->CP);
	nor.setInput( and.getOutput() , this->not_Q );
	this->Q = nor.getOutput();

}

void D_FLIPFLOP::print(){
	cout << "Q(t+1): " << this->Q << endl;
	cout << endl;
}