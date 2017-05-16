#include <iostream>
#include <stdlib.h>

#include "Laboratory-work-6-sem2.hpp"
using namespace std;

int main(void)
{
	double complex_real = 0.0;
	double complex_imaginary = 0.0;

	cout << "Basic complex number is : " << endl;

	complex complex_num1{4.2,2.8};
	cout << complex_num1;
	complex_real = 4.2;
	complex_imaginary = 2.8;
	complex complex_num2(complex_real,complex_imaginary);
	complex_num2.add(complex_num2);
	cout << complex_num2;
	complex complex_num3(complex_real,complex_imaginary);
	complex_num3.sub(complex_num3);
	cout << complex_num3;
	complex complex_num4(complex_real,complex_imaginary);
	complex_num4.mult(complex_num4);
	cout << complex_num4;
	complex complex_num5(complex_real,complex_imaginary);
	complex_num5.mult_for_complex(complex_num5);
	cout << complex_num5;
	complex complex_num6(complex_real,complex_imaginary);
	complex_num6.div(complex_num6);
	cout << complex_num6;

	return 0;
}
