#include<iostream>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H


class Fraction{
private:
	int NewNum;
	int NewDenom;



public:
	//default constructor and Destructor
	Fraction();
	~Fraction();

	//Overloaded constructor
	Fraction(int, int);

	//Accesor Functions
	int getNumerator() const;
	int getDenominator() const;

	//Mutator Functions
	void setNumerator(int);
	void setDenominator(int);

	//Funtions
	void add(Fraction, Fraction);
	void subtract(Fraction, Fraction);
	void multiply(Fraction, Fraction);
	void divide(Fraction, Fraction);

};

#endif