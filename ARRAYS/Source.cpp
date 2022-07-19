//Arrays
#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void SORT(int arr[], const int n);
void Print(int arr[], const int n);
double AVG(int arr[], const int n);
void shiftLeft(int arr[], const int n);
int SUM(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftRight(int arr[], const int n);
void main()
{
	setlocale(LC_ALL, "");
	const int n = 6;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	SORT(arr, n);
	Print(arr, n);
	cout << "сумма всех значений массива = " << SUM(arr, n) << endl;
	cout << "среднее арифметическое всех значений массива = " << AVG(arr, n) << endl;
	cout << "минимальное значение из массива = " << minValueIn(arr, n)<< endl;
	cout << "максимальное значение из массива = " << maxValueIn(arr, n) << endl;
	cout << endl;
	cout << "массив со сдвигом вправо "; shiftRight(arr, n);
	cout << endl;
	cout << "массив со сдвигом влево "; shiftLeft(arr, n);


}
//Вывод массива на экран:
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 15;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}
void SORT(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

		}
	}
}
int SUM(int arr[], const int n)
{
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		x += arr[i];
	}
	return x;
}
double AVG(int arr[], const int n)
{		
	return (double) SUM(arr, n) / n;
}
int minValueIn(int arr[], const int n)
{
	return arr[0];
}
int maxValueIn(int arr[], const int n)
{
	return arr[n - 1];
}
void shiftRight(int arr[], const int n)
{
	int y = 3;
	for (int i = 0; i < y; i++)
	{
		int x = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = x;
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << tab;
}
void shiftLeft(int arr[], const int n)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		int x = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = x;
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << tab;
	cout << endl;
}

