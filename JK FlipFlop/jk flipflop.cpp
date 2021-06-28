#include "jk flipflop.h"
#include "nor.h"
#include "not.h"
#include "and.h"
#include<iostream>

using namespace std;

JK_FLIPFLOP::JK_FLIPFLOP(){
	this->Q = 0;
}

void JK_FLIPFLOP::setInput(int j, int k, int cp){
	this->J = j;
	this->K = k;
	this->CP = cp;

	this->processing();
}

void JK_FLIPFLOP::processing(){
	
	gate_NOT not;
	gate_AND and;
	gate_NOR nor;

	not.setInput(this->Q);
	this->not_Q = not.getOutput();

	and.setInput(this->J, this->CP);
	and.setInput( and.getOutput() , this->not_Q );
	unsigned short value2 = and.getOutput();

	nor.setInput(value2, this->Q);
	this->not_Q = nor.getOutput();

	and.setInput(this->K, this->CP);
	and.setInput( and.getOutput() , this->Q );
	unsigned short value1 = and.getOutput();

	nor.setInput(value1, this->not_Q);
	this->Q = nor.getOutput();

}

void JK_FLIPFLOP::print(){
	cout << "Q(t+1): " << this->Q << endl;
	cout << endl;
}