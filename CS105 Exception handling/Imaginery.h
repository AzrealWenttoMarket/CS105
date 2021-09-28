#ifndef IMAGINERY_H
#define IMAGINERY_H

#include <iostream>
using namespace std;

class Complex
{
private:
	int real, imag;
public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}

	Complex operator + (Complex const& obj)
	{
		// a+c + b+d = x
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}

	Complex operator - (Complex const& obj)
	{
		Complex res;
		res.real = real - obj.real;
		res.imag = imag - obj.imag;
		return res;
	}

	Complex operator * (Complex const& obj)
	{
		Complex res;
		res.real = ((real * obj.real) - (imag * obj.imag));
		res.imag = ((real * obj.imag) + (imag * obj.real));
		return res;
	}

	Complex operator / (Complex const& obj)
	{
		Complex res;
		res.real = ((real * obj.real) + (imag * obj.imag)) / ((imag * imag) + (obj.imag * obj.imag));
		res.imag = ((imag * obj.real) + (real * obj.imag)) / ((imag * imag) + (obj.imag * obj.imag));
		return res;
	}

	void printPlus()
	{
		cout << real << " + i" << imag << endl;
	}

	void printSub()
	{
		cout << real << " - i" << imag << endl;
	}

	void printMult()
	{
		cout << real << " x i" << imag << endl;
	}

	void printDiv()
	{
		cout << real << " / i" << imag << endl;
	}
};

#endif