#include <iostream>
#include <conio.h>

using namespace std;

class complex
{
private: 
	double a;
	double b;

public:	
	complex() { a = 0.0; b = 0.0; }

	complex(double &a, double &b)
	{
		this->a = a;
		this->b = b;
	}

	void printf(ostream& print)
	{
		print << "z = " << a;
		if ( b >= 0 ) cout << " + " << b << "i";
		else if ( b == 1 ) cout << " + " << "i"; 
		else if ( b == -1 ) cout << " - " << "i";
		else if ( b < 0 ) cout << " - " << b*(-1) << "i";
	}

	friend ostream & operator <<(ostream& print, const complex& complex_num); 

	double real() { return a; }
	double imaginary() { return b; }

	void add(complex& complex_num)
	{
		double a_new = 0;
		double b_new = 0;

		cout << endl << "Print the complex number for summation: " << endl;
		cin >> a_new; cin >> b_new;
		a = complex_num.real()+a_new;
		b = complex_num.imaginary()+b_new;

		complex(a,b);
	}

	void sub(complex complex_num)
	{
		double a_new = 0;
		double b_new = 0;
		
		cout << endl << "Print the complex number for subtraction: " << endl;
		cin >> a_new; cin >> b_new;
		a = complex_num.real()-a_new;
		b = complex_num.imaginary()-b_new;

		complex(a_new,b_new);
	}

	void mult(complex complex_num)
	{
		double a_new = 0;
		double b_new = 0;
		int h = 0;

		cout << endl << "Print the integer number for multiplication: " << endl;
		cin >> h;

		a = complex_num.real()*h;
		b = complex_num.imaginary()*h;

		complex(a,b);
	}

	void mult_for_complex(complex complex_num)
	{
		double a_new = 0;
		double b_new = 0;

		cout << endl << "Print the complex number for multiplication: " << endl;
		cin >> a_new; cin >> b_new;

		a = complex_num.real()*a_new - complex_num.imaginary()*b_new;
		b = complex_num.real()*b_new + complex_num.imaginary()*a_new;

		complex(a,b);
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

		a = (double)complex_num.real()/h;
		b = (double)complex_num.imaginary()/h;

		complex(a,b);
	}
};

	ostream& operator <<(ostream& print, complex& complex_num)
	{
		complex_num.printf(print);
		return print;
	}

int main(void)
{
	double a = 0.0;
	double b = 0.0;

	cout << "Print the real and imaginary parts of the complex number z = a + bi : " << endl;
	cin >> a; cin >> b;

	complex complex_num(a,b);
	cout << complex_num;
	complex_num.add(complex_num);
	cout << complex_num;
	complex_num.sub(complex_num);
	cout << complex_num;
	complex_num.mult(complex_num);
	cout << complex_num;
	complex_num.mult_for_complex(complex_num);
	cout << complex_num;
	complex_num.div(complex_num);
	cout << complex_num;

	cout << endl << endl << "Press any button to exit the program " << endl;
	_getch();
	return 0;
}