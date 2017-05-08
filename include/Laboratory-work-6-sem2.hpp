#include <iostream>
using namespace std;

class complex
{
private: 
	double a = 0;
	double b = 0;
public:	
	complex() { a = 0; b = 0; }

	complex(double &a_new, double &b_new)
	{
		a = a_new;
		b = b_new;
		print(a,b);
	}

	void print(double a, double b)
	{
		cout << "z = " << a;
		if ( b >= 0 ) cout << " + " << b << "i";
		else cout << " - " << b*(-1) << "i";
	}

	double real() { return a; }
	double imaginary() { return b; }

	void add(complex complex_num)
	{
		double a_new = 0;
		double b_new = 0;

		cout << endl << "Print the complex number for summation: " << endl;
		cin >> a_new; cin >> b_new;
		a_new = complex_num.real()+a_new;
		b_new = complex_num.imaginary()+b_new;

		complex(a_new,b_new);
	}

	void sub(complex complex_num)
	{
		double a_new = 0;
		double b_new = 0;
		
		cout << endl << "Print the complex number for subtraction: " << endl;
		cin >> a_new; cin >> b_new;
		a_new = complex_num.real()-a_new;
		b_new = complex_num.imaginary()-b_new;

		complex(a_new,b_new);
	}

	void mult(complex complex_num)
	{
		double a_new = 0;
		double b_new = 0;
		int h = 0;

		cout << endl << "Print the integer number for multiplication: " << endl;
		cin >> h;

		a_new = complex_num.real()*h;
		b_new = complex_num.imaginary()*h;

		complex(a_new,b_new);
	}

	int div(complex complex_num)
	{
		double a_new = 0;
		double b_new = 0;
		int h = 0;
		int temp = 0;

		cout << endl << "Print the integer number for division: " << endl;
		cin >> temp;
		try
		{
			if(temp == 0) throw 1;
		}
		catch(int test)
		{
			cout << endl << "[-] Exception " << test << ": It can not be divided by zero!!!" << endl;
			return 0;
		}
		h = temp;

		a_new = (double)complex_num.real()/h;
		b_new = (double)complex_num.imaginary()/h;

		complex(a_new,b_new);
	}
};
