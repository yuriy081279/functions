#include<iostream>
using namespace std;
#define tab "\t"
const int STROKA = 3;
const int STOLB = 4;

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
//void shiftLeft (int arr[STROKA][STOLB], const int STROKA, const int STOLB);

//int shiftRight();

void main()
{
	setlocale(LC_ALL, "");
	
	int i_arr_2[STROKA][STOLB];
	double i_brr_2[STROKA][STOLB];
	char i_crr_2[STROKA][STOLB];
	float i_drr_2[STROKA][STOLB];	
	
	FillRand(i_arr_2, STROKA, STOLB);
	Print(i_arr_2, STROKA, STOLB);
	cout << " Сумма элементов данного массива = " << Sum(i_arr_2, STROKA, STOLB)<<endl<<endl;	
	cout << " Среднее арифметическое элементов этого массива = " << Avg(i_arr_2, STROKA, STOLB)<<endl<<endl;	
	cout << " Минимальное значение в этом массиве = "<< minValueIn(i_arr_2, STROKA, STOLB)<< endl << endl;
	cout << " Максимальное значение в этом массиве = "<< maxValueIn(i_arr_2, STROKA, STOLB)<< endl << endl;	

	FillRand(i_brr_2, STROKA, STOLB);
	Print(i_brr_2, STROKA, STOLB);
	cout << " Сумма элементов данного массива = " << Sum(i_brr_2, STROKA, STOLB)<<endl<<endl;
	cout << " Среднее арифметическое элементов этого массива = " << Avg(i_brr_2, STROKA, STOLB) << endl << endl;
	cout << " Минимальное значение в массиве = " << minValueIn(i_brr_2, STROKA, STOLB) << endl << endl;
	cout << " Максимальное значение в этом массиве = " << maxValueIn(i_brr_2, STROKA, STOLB) << endl << endl;

	FillRand(i_crr_2, STROKA, STOLB);
	Print(i_crr_2, STROKA, STOLB);
	cout << " Сумма элементов данного массива = " << Sum(i_crr_2, STROKA, STOLB)<<endl<<endl;
	cout << " Среднее арифметическое элементов этого массива = " << Avg(i_crr_2, STROKA, STOLB) << endl << endl;
	cout << " Минимальное значение в массиве  = " << minValueIn(i_crr_2, STROKA, STOLB) << endl << endl;
	cout << " Максимальное значение в этом массиве = " << maxValueIn(i_crr_2, STROKA, STOLB) << endl << endl;

	FillRand(i_drr_2, STROKA, STOLB);
	Print(i_drr_2, STROKA, STOLB);
	cout << " Сумма элементов данного массива = " << Sum(i_drr_2, STROKA, STOLB) << endl << endl;
	cout << " Среднее арифметическое элементов этого массива = " << Avg(i_drr_2, STROKA, STOLB) << endl << endl;
	cout << " Минимальное значение в массиве = " << minValueIn(i_drr_2, STROKA, STOLB) << endl << endl;
	cout << " Максимальное значение в этом массиве = " << maxValueIn(i_drr_2, STROKA, STOLB) << endl << endl;
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
		cout << endl;
	}
	return SUM;
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
		cout << endl;
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
		cout << endl;
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
		cout << endl;
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
	/*int i = 0;
	int j = 0;*/
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
	/*int i = 0;
	int j = 0;*/
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
	int i = 0;
	int j = 0;
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
	int i = 0;
	int j = 0;
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
	int i = 0;
	int j = 0;
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
	int i = 0;
	int j = 0;
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
	int i = 0;
	int j = 0;
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
	int i = 0;
	int j = 0;
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
/*void ShiftLeft(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y;
	cin >> y;
	for (int i = 0; i < y; i++)
	{
		int x = arr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for(int j = 0; j <STOLB; j++)
			arr[i][j] = arr[i][j+1];
	    }
		arr[STROKA-1][STOLB-2] = x;
	}
	cout << endl;

}*/