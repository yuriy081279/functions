#include<iostream>
using namespace std;
int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
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
