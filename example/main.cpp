#include <iostream>
#include <stdlib.h>

#include "Laboratory-work-6-sem2.hpp"
using namespace std;

int main(void)
{
	double a = 0;
	double b = 0;
	complex *ptr = 0;

	complex complex_num(4,5);
	ptr->add(complex_num);
	ptr->sub(complex_num);
	ptr->mult(complex_num);
	ptr->div(complex_num);

	delete ptr; 
	ptr = NULL;

	cout << endl << endl << "Press any button to exit the program " << endl;
	_getch();
	return 0;
}