#include "Fraction.h"

Fraction::Fraction(){
	NewNum = 0;
	NewDenom = 0;

}

Fraction::~Fraction(){

}

Fraction::Fraction(int a, int b){
	NewDenom = b;
	NewNum = a;
}

int Fraction::getNumerator()const{
	return NewNum;
}

int Fraction::getDenominator() const{
	return NewDenom;
}

void Fraction::setNumerator(int a){
	NewNum = a;
}

void Fraction::setDenominator(int b){
	NewDenom = b;
}
void Fraction::add(Fraction a, Fraction b){
	int denom, numer;
	if (a.NewDenom == b.NewDenom)
	{
		numer = a.NewNum + b.NewNum;
		denom = a.NewDenom;

	}
	else
	{
		if (a.NewDenom % b.NewDenom == 0)
		{
			denom = a.NewDenom;
			numer = (a.NewNum) + (a.NewDenom / b.NewNum);
		}
		else if (b.NewDenom % a.NewDenom == 0 && b.NewDenom > a.NewDenom)
		{
			denom = b.NewDenom;
			numer = (b.NewNum) + (b.NewDenom / a.NewNum);
		}
		else
		{
			denom = (a.NewDenom * b.NewDenom);
			numer = (denom / a.NewDenom) + (denom / b.NewDenom);
		}
	}

	cout << numer << endl << "-" << endl << denom;


}

void Fraction::subtract(Fraction a, Fraction b){
	int denom, numer;
	if (a.NewDenom == b.NewDenom)
	{
		numer = a.NewNum - b.NewNum;
		denom = a.NewDenom;

	}
	else
	{
		if (a.NewDenom % b.NewDenom == 0)
		{
			denom = a.NewDenom;
			numer = (a.NewNum) - (a.NewDenom / b.NewNum);
		}
		else if (b.NewDenom % a.NewDenom == 0)
		{
			denom = b.NewDenom;
			numer = (b.NewNum) - (b.NewDenom / a.NewNum);
		}
		else
		{
			denom = (a.NewDenom * b.NewDenom);
			numer = (denom / a.NewDenom) - (denom / b.NewDenom);
		}
	}

	cout << numer << endl << "-" << endl << denom << endl;

}


void Fraction::multiply(Fraction a, Fraction b){

	int num, denom;

	num = a.NewNum * b.NewNum;
	denom = a.NewDenom * b.NewDenom;

	cout << num << endl << "-" << endl << denom << endl;
}

void Fraction::divide(Fraction a, Fraction b){

	int num, denom;

	num = a.NewNum * b.NewDenom;
	denom = a.NewDenom * b.NewNum;

	cout << num << endl << "-" << endl << denom << endl;
}