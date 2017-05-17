#include <iostream>
using namespace std;

class complex
{
private: 
	double complex_real;
	double complex_imaginary;

	double add_com_num(complex& complex_num);
	double sub_com_num(complex complex_num);
	double mult_com_num(complex complex_num);
	double mult_for_com_num(complex complex_num);
	int div_com_num(complex complex_num);

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

	double add(complex& complex_num)
	{
		add_com_num(complex_num);
	}

	double sub(complex complex_num)
	{
		sub_com_num(complex_num);
	}

	double mult(complex complex_num)
	{
		mult_com_num(complex_num);
	}

	double mult_for_complex(complex complex_num)
	{
		mult_for_com_num(complex_num);
	}

	int div(complex complex_num)
	{
		div_com_num(complex_num);
	}
};

	double complex:: add_com_num(complex& complex_num)
	{
		double real_new = 0.2;
		double imaginary_new = 0.0;
		
		complex_real = complex_num.real()+real_new;
		complex_imaginary = complex_num.imaginary()+imaginary_new;

		complex(complex_real,complex_imaginary);
		return complex_real;
	}

	double complex:: sub_com_num(complex complex_num)
	{
		double real_new = 1.2;
		double imaginary_new = 0.0;
		
		complex_real = complex_num.real()-real_new;
		complex_imaginary = complex_num.imaginary()-imaginary_new;

		complex(complex_real,complex_imaginary);
		return complex_real;
	}

	double complex:: mult_com_num(complex complex_num)
	{
		int h = 2;

		complex_real = complex_num.real()*h;
		complex_imaginary = complex_num.imaginary()*h;

		complex(complex_real,complex_imaginary);
		return complex_real;
	}

	double complex:: mult_for_com_num(complex complex_num)
	{
		double real_new = 2;
		double imaginary_new = -1;

		complex_real = complex_num.real()*real_new - complex_num.imaginary()*imaginary_new;
		complex_imaginary = complex_num.real()*imaginary_new + complex_num.imaginary()*real_new;

		//complex(complex_real,complex_imaginary);
		return complex_real;
	}

	int complex:: div_com_num(complex complex_num)
	{
		int h = 0;
		int temp = 0;

		cin >> temp;
		try
		{
			if(temp == 0) throw 1;
		}
		catch(int test)
		{
			//cout << endl << "[-] Exception " << test << ": It can not be divided by zero!!!" << endl;
			return 0;
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

