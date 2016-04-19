#include<iostream>
#include"Fraction.h"

using namespace std;

int main(){
	int a, b, c, d;

	cout << "Please enter Numerator for the first fraction:" << endl;
	cin >> a;
	cout << endl << "Please enter demominator for first fraction" << endl;
	cin >> b;

	cout << "Please enter Numerator for the second fraction:" << endl;
	cin >> c;
	cout << endl << "Please enter demominator for second fraction" << endl;
	cin >> d;

	Fraction f1(a, b), f2(c, d);

	cout << endl;
	//f1.add(f1, f1);
	//f1.multiply(f1, f2);
	f2.divide(f1, f2);
	system("pause");
	return 0;
}