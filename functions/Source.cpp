#include<iostream>
using namespace std;
int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
int Factorial(int a);
int Vozvedenie_v_stepen(int a, int b);
int Vozvedenie_v_stepen_po_kolhoznomu (int a, int b);
void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "¬ведите 2 числа: "; cin >> a >> b;
	int c = Add(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " ! " << " = " << Factorial(a) << endl;
	cout << a << " ^ " << b << " = " << Vozvedenie_v_stepen_po_kolhoznomu (a, b) << " (kolhozniy variant) "<< endl;
	cout << a << " ^ " << b << " = " << Vozvedenie_v_stepen(a, b) << endl;
}
int Add(int a, int b)
{

	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}
int Factorial(int a)
{
	int m = 1;
	int x = a+1;
	do
	{
	  m *= (--x);	  
	} while (x > 1);
	return m;		
}
int Vozvedenie_v_stepen_po_kolhoznomu (int a, int b)
{
	int x = 1;
	for (int i = 0; i < b; i++)
	{
	  x*= a;
	}
	return x;
}
int Vozvedenie_v_stepen (int a, int b)
{	
	return pow (a, b);
}
