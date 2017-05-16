#include <iostream>
#include <conio.h>

using namespace std;

class complex
{
private: 
	double complex_real;
	double complex_imaginary;

	void add_com_num(complex& complex_num);
	void sub_com_num(complex complex_num);
	void mult_com_num(complex complex_num);
	void mult_for_com_num(complex complex_num);
	bool div_com_num(complex complex_num);

public:	
	complex() : complex_real(0.0), complex_imaginary(0.0) {};

	complex(double complex_real_, double complex_imaginary_) : complex_real(complex_real_), complex_imaginary(complex_imaginary_) {};

	void printf(ostream& print)
	{
		print << "z = " << complex_real;
		if ( complex_imaginary > 0 ) cout << " + " << complex_imaginary << "i";
		else if ( complex_imaginary == 0 ) cout << endl;
		else if ( complex_imaginary == 1 ) cout << " + " << "i"; 
		else if ( complex_imaginary == -1 ) cout << " - " << "i";
		else if ( complex_imaginary < 0 ) cout << " - " << complex_imaginary*(-1) << "i";
	}

	friend ostream & operator <<(ostream& print, const complex& complex_num); 

	double real() { return complex_real; }
	double imaginary() { return complex_imaginary; }

	void add(complex& complex_num)
	{
		add_com_num(complex_num);
	}

	void sub(complex complex_num)
	{
		sub_com_num(complex_num);
	}

	void mult(complex complex_num)
	{
		mult_com_num(complex_num);
	}

	void mult_for_complex(complex complex_num)
	{
		mult_for_com_num(complex_num);
	}

	bool div(complex complex_num)
	{
		div_com_num(complex_num);
	}
};

	void complex:: add_com_num(complex& complex_num)
	{
		double real_new = 0.0;
		double imaginary_new = 0.0;

		cout << endl << "Print the real and imaginary parts of the complex number for summation: " << endl;
		cin >> real_new; cin >> imaginary_new;
		complex_real = complex_num.real()+real_new;
		complex_imaginary = complex_num.imaginary()+imaginary_new;

		complex(complex_real,complex_imaginary);
	}

	void complex:: sub_com_num(complex complex_num)
	{
		double real_new = 0.0;
		double imaginary_new = 0.0;
		
		cout << endl << "Print the real and imaginary parts of the complex number for subtraction: " << endl;
		cin >> real_new; cin >> imaginary_new;
		complex_real = complex_num.real()-real_new;
		complex_imaginary = complex_num.imaginary()-imaginary_new;

		complex(complex_real,complex_imaginary);
	}

	void complex:: mult_com_num(complex complex_num)
	{
		int h = 0;

		cout << endl << "Print the integer number for multiplication: " << endl;
		cin >> h;

		complex_real = complex_num.real()*h;
		complex_imaginary = complex_num.imaginary()*h;

		complex(complex_real,complex_imaginary);
	}

	void complex:: mult_for_com_num(complex complex_num)
	{
		double real_new = 0.0;
		double imaginary_new = 0.0;

		cout << endl << "Print the real and imaginary parts of the complex number for multiplication: " << endl;
		cin >> real_new; cin >> imaginary_new;

		complex_real = complex_num.real()*real_new - complex_num.imaginary()*imaginary_new;
		complex_imaginary = complex_num.real()*imaginary_new + complex_num.imaginary()*real_new;

		complex(complex_real,complex_imaginary);
	}

	bool complex:: div_com_num(complex complex_num)
	{
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
			return true;
		}
		h = temp;

		complex_real = (double)complex_num.real()/h;
		complex_imaginary = (double)complex_num.imaginary()/h;

		complex(complex_real,complex_imaginary);
	}

	ostream& operator <<(ostream& print, complex& complex_num)
	{
		complex_num.printf(print);
		return print;
	}

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

	cout << endl << endl << "Press any button to exit the program " << endl;
	_getch();
	return 0;
}