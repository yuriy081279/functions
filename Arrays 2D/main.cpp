#include<iostream>
using namespace std;
#define tab "\t"
const int STROKA = 3;
const int STOLB = 4;
int y = 4;

void FillRand(int arr[STROKA][STOLB], const int STROKA, const int STOLB);
void FillRand(double arr[STROKA][STOLB], const int STROKA, const int STOLB);
void FillRand(char arr[STROKA][STOLB], const int STROKA, const int STOLB);
void FillRand(float arr[STROKA][STOLB], const int STROKA, const int STOLB);

void Print (int arr[STROKA][STOLB], const int STROKA, const int STOLB);
void Print (double arr[STROKA][STOLB], const int STROKA, const int STOLB);
void Print (char arr[STROKA][STOLB], const int STROKA, const int STOLB);
void Print (float arr[STROKA][STOLB], const int STROKA, const int STOLB);

double Sum (int arr[STROKA][STOLB], const int STROKA, const int STOLB);
double Sum (double arr[STROKA][STOLB], const int STROKA, const int STOLB);
char Sum (char arr[STROKA][STOLB], const int STROKA, const int STOLB);
float Sum (float arr[STROKA][STOLB], const int STROKA, const int STOLB);

double Avg (int arr[STROKA][STOLB], const int STROKA, const int STOLB);
double Avg (double arr[STROKA][STOLB], const int STROKA, const int STOLB);
char Avg (char arr[STROKA][STOLB], const int STROKA, const int STOLB);
float Avg (float arr[STROKA][STOLB], const int STROKA, const int STOLB);

int minValueIn(int arr[STROKA][STOLB], const int STROKA, const int STOLB);
double minValueIn(double arr[STROKA][STOLB], const int STROKA, const int STOLB);
char minValueIn(char arr[STROKA][STOLB], const int STROKA, const int STOLB);
float minValueIn(float arr[STROKA][STOLB], const int STROKA, const int STOLB);

int maxValueIn(int arr[STROKA][STOLB], const int STROKA, const int STOLB);
double maxValueIn(double arr[STROKA][STOLB], const int STROKA, const int STOLB);
char maxValueIn(char arr[STROKA][STOLB], const int STROKA, const int STOLB);
float maxValueIn(float arr[STROKA][STOLB], const int STROKA, const int STOLB);

void shiftLeft (int arr[STROKA][STOLB], const int STROKA, const int STOLB);
void shiftLeft (double brr[STROKA][STOLB], const int STROKA, const int STOLB);
void shiftLeft (char crr[STROKA][STOLB], const int STROKA, const int STOLB);
void shiftLeft (float drr[STROKA][STOLB], const int STROKA, const int STOLB);

void shiftRight (int arr[STROKA][STOLB], const int STROKA, const int STOLB);
void shiftRight (double brr[STROKA][STOLB], const int STROKA, const int STOLB);
void shiftRight (char crr[STROKA][STOLB], const int STROKA, const int STOLB);
void shiftRight (float drr[STROKA][STOLB], const int STROKA, const int STOLB);

void main()
{
	setlocale(LC_ALL, "");
	
	int i_arr_2[STROKA][STOLB];
	double i_brr_2[STROKA][STOLB];
	char i_crr_2[STROKA][STOLB];
	float i_drr_2[STROKA][STOLB];	
	
	FillRand(i_arr_2, STROKA, STOLB);
	Print(i_arr_2, STROKA, STOLB);
	cout << " Сумма элементов данного массива = " << Sum(i_arr_2, STROKA, STOLB) << endl;
	cout << " Среднее арифметическое элементов этого массива = " << Avg(i_arr_2, STROKA, STOLB)<<endl;	
	cout << " Минимальное значение в этом массиве = "<< minValueIn(i_arr_2, STROKA, STOLB)<< endl;
	cout << " Максимальное значение в этом массиве = "<< maxValueIn(i_arr_2, STROKA, STOLB)<< endl;	
	shiftLeft(i_arr_2, STROKA, STOLB);	
	cout << " Сдвинутый массив влево на "<<y<<" элемента" << endl;
	Print(i_arr_2, STROKA, STOLB);
	shiftRight(i_arr_2, STROKA, STOLB);	
	cout << " Сдвинутый массив вправо на "<<y<<" элемента" << endl;
	Print(i_arr_2, STROKA, STOLB);
	cout << "------------------------------------------------";

	cout << endl << endl;
	FillRand(i_brr_2, STROKA, STOLB);
	Print(i_brr_2, STROKA, STOLB);
	cout << " Сумма элементов данного массива = " << Sum(i_brr_2, STROKA, STOLB)<<endl;
	cout << " Среднее арифметическое элементов этого массива = " << Avg(i_brr_2, STROKA, STOLB)<< endl;
	cout << " Минимальное значение в массиве = " << minValueIn(i_brr_2, STROKA, STOLB) << endl;
	cout << " Максимальное значение в этом массиве = " << maxValueIn(i_brr_2, STROKA, STOLB) << endl;
	shiftLeft(i_brr_2, STROKA, STOLB);
	cout << " Сдвинутый массив влево на " << y << " элемента" << endl;
	Print(i_brr_2, STROKA, STOLB);
	shiftRight(i_brr_2, STROKA, STOLB);
	cout << " Сдвинутый массив вправо на " << y << " элемента" << endl;
	Print(i_brr_2, STROKA, STOLB);
	cout << "------------------------------------------------";

	cout << endl << endl;
	FillRand(i_crr_2, STROKA, STOLB);
	Print(i_crr_2, STROKA, STOLB);
	cout << " Сумма элементов данного массива = " << Sum(i_crr_2, STROKA, STOLB)<<endl<<endl;
	cout << " Среднее арифметическое элементов этого массива = " << Avg(i_crr_2, STROKA, STOLB) << endl << endl;
	cout << " Минимальное значение в массиве  = " << minValueIn(i_crr_2, STROKA, STOLB) << endl << endl;
	cout << " Максимальное значение в этом массиве = " << maxValueIn(i_crr_2, STROKA, STOLB) << endl << endl;
	shiftLeft(i_crr_2, STROKA, STOLB);
	cout << " Сдвинутый массив влево на " << y << " элемента" << endl;
	Print(i_crr_2, STROKA, STOLB);
	shiftRight(i_crr_2, STROKA, STOLB);
	cout << " Сдвинутый массив вправо на " << y << " элемента" << endl;
	Print(i_crr_2, STROKA, STOLB);
	cout << "------------------------------------------------";

	cout << endl << endl;
	FillRand(i_drr_2, STROKA, STOLB);
	Print(i_drr_2, STROKA, STOLB);
	cout << " Сумма элементов данного массива = " << Sum(i_drr_2, STROKA, STOLB) << endl << endl;
	cout << " Среднее арифметическое элементов этого массива = " << Avg(i_drr_2, STROKA, STOLB) << endl << endl;
	cout << " Минимальное значение в массиве = " << minValueIn(i_drr_2, STROKA, STOLB) << endl << endl;
	cout << " Максимальное значение в этом массиве = " << maxValueIn(i_drr_2, STROKA, STOLB) << endl << endl;
	shiftLeft(i_drr_2, STROKA, STOLB);
	cout << " Сдвинутый массив влево на " << y << " элемента" << endl;
	Print(i_drr_2, STROKA, STOLB);
	shiftRight(i_drr_2, STROKA, STOLB);
	cout << " Сдвинутый массив вправо на " << y << " элемента" << endl;
	Print(i_drr_2, STROKA, STOLB);	
}

void FillRand(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			arr[i][j]=rand()%100;
		}
	}
}
void FillRand(double arr[STROKA][STOLB], const int STROKA, const int STOLB)
{	
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			arr[i][j]=rand()%1000;
			arr[i][j] /= 100;
		}
	}	
}
void FillRand(char arr[STROKA][STOLB], const int STROKA, const int STOLB)
{	
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			arr[i][j]=rand();
		}
	}	
}
void FillRand(float arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			arr[i][j] = rand()%100000;
			arr[i][j] /= 1000;
		}
	}
}
void Print(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			cout << arr[i][j]<<tab;
		}
		cout << endl;
	}
}
void Print(double arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			cout << arr[i][j]<<tab;
		}
		cout << endl;
	}
}
void Print(char arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			cout << arr[i][j]<<tab;
		}
		cout << endl;
	}
}
void Print(float arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			cout << arr[i][j]<<tab;
		}
		cout << endl;
	}
}
double Sum (int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
	    for (int j = 0; j < STOLB; j++)
		{		  
		  SUM += arr[i][j];
		}		
	}
	return (double)SUM;
}
double Sum (double arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	double SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
	    for (int j = 0; j < STOLB; j++)
		{		  
		  SUM += arr[i][j];
		}		
	}
	return SUM;
}
char Sum(char arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	char SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
	    for (int j = 0; j < STOLB; j++)
		{		  
		  SUM += arr[i][j];
		}		
	}
	return SUM;
}
float Sum(float arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	float SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
	    for (int j = 0; j < STOLB; j++)
		{		  
		  SUM += arr[i][j];
		}		
	}
	return SUM;
}

double Avg(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(arr, STROKA, STOLB) / (STROKA * STOLB);
}
double Avg(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(brr, STROKA, STOLB) / (STROKA * STOLB);
}
char Avg(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(crr, STROKA, STOLB) / (STROKA * STOLB);
}
float Avg(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(drr, STROKA, STOLB) / (STROKA * STOLB);
}

int minValueIn(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{	
	int x = 0;	
	for (int i = 0; i < STROKA; i++)
	{
		for ( int j=0; j < STOLB; j++)
		{
		    for (int c = 0; c < STROKA; c++)
			{	
				for (int d = 0; d < STOLB; d++)
				{
					if (arr[i][j] > arr[c][d])
					{
						++x;
					}				
					
				}
			}
			if (x == 0)
			{
				return arr[i][j];
			}
			x = 0;
		}		
	}	
}
double minValueIn(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{	
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{		
		for (int j = 0; j < STOLB; j++)
		{
			
			for (int c = 0; c < STROKA; c++)
			{				
				for (int d = 0; d < STOLB; d++)
				{
					if (brr[i][j] >= brr[c][d])
					{
						++x;	
					}					
				}				
			}	
			if (x == 0)
			{
				return brr[i][j];

			}
			x = 0;
		}		
	}	
}
char minValueIn(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{	
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (crr[i][j] >= crr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return crr[i][j];

			}
			x = 0;
		}
	}	
}
float minValueIn(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{	
	int x=0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (drr[i][j] > drr[c][d])
					{
						++x;
					}					
				}
			}
			if (x == 0)
			{
				return drr[i][j];

			}
			x = 0;
		}
	}	
}
int maxValueIn(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{	
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (arr[i][j] < arr[c][d])
					{
						++x;
					}

				}
			}
			if (x == 0)
			{
				return arr[i][j];
			}
			x = 0;
		}
	}
}
double maxValueIn(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{

			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (brr[i][j] < brr[c][d])
					{
						++x;

					}
				}
			}
			if (x == 0)
			{
				return brr[i][j];

			}
			x = 0;
		}
	}
}
char maxValueIn(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (crr[i][j] < crr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return crr[i][j];

			}
			x = 0;
		}
	}
}
float maxValueIn(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (drr[i][j] < drr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return drr[i][j];

			}
			x = 0;
		}
	}
}

void shiftLeft(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < y; i++)
	{
		int x = arr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for (int j = 0; j < STOLB; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[STROKA - 1][STOLB - 1] = x;
	}
}
void shiftRight(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < y; i++)
	{
		int x = arr[STROKA - 1][STOLB - 1];
		for (int i = STROKA - 1; i >= 0; i--)
		{
			for (int j = STOLB - 1; j >= 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
		}
		arr[0][0] = x;
	}
	cout << endl;
}

void shiftLeft(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < y; i++)
	{
		double x = brr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for (int j = 0; j < STOLB; j++)
			{
				brr[i][j] = brr[i][j + 1];
			}
		}
		brr[STROKA - 1][STOLB - 1] = x;
	}
}
void shiftRight(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < y; i++)
	{
		double x = brr[STROKA - 1][STOLB - 1];
		for (int i = STROKA - 1; i >= 0; i--)
		{
			for (int j = STOLB - 1; j >= 0; j--)
			{
				brr[i][j] = brr[i][j - 1];
			}
		}
		brr[0][0] = x;
	}
	cout << endl;
}
void shiftLeft(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < y; i++)
	{
		char x = crr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for (int j = 0; j < STOLB; j++)
			{
				crr[i][j] = crr[i][j + 1];
			}
		}
		crr[STROKA - 1][STOLB - 1] = x;
	}
}
void shiftRight(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < y; i++)
	{
		char x = crr[STROKA - 1][STOLB - 1];
		for (int i = STROKA - 1; i >= 0; i--)
		{
			for (int j = STOLB - 1; j >= 0; j--)
			{
				crr[i][j] = crr[i][j - 1];
			}
		}
		crr[0][0] = x;
	}
	cout << endl;
}
void shiftLeft(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < y; i++)
	{
		float x = drr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for (int j = 0; j < STOLB; j++)
			{
				drr[i][j] = drr[i][j + 1];
			}
		}
		drr[STROKA - 1][STOLB - 1] = x;
	}
}
void shiftRight(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < y; i++)
	{
		float x = drr[STROKA - 1][STOLB - 1];
		for (int i = STROKA - 1; i >= 0; i--)
		{
			for (int j = STOLB - 1; j >= 0; j--)
			{
				drr[i][j] = drr[i][j - 1];
			}
		}
		drr[0][0] = x;
	}
	cout << endl;
}