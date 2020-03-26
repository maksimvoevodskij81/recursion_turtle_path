
#include<iostream>
#include<time.h>
using namespace std;
const int SIZE_ROW = 5;
const int SIZE_COL = 5;
void fullArr(int arr[][5], int SIZE_ROW, int SIZE_COL);
void showArr(int arr[][5], int SIZE_ROW, int SIZE_COL);
int rec(int arr[][5], int SIZE_ROW, int SIZE_COL);
int main()
{
	srand(time(0));
	rand();
	int i = 0;
	int j = 0;
	int arr[SIZE_ROW][SIZE_COL];
	fullArr(arr, SIZE_ROW, SIZE_COL);
	showArr(arr, SIZE_ROW, SIZE_COL);
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "The way :";
	cout << "\nThe amaunt of numbers that the turtle collected =[" << rec(arr, i, j) << "]\n";
}
void fullArr(int arr[][5], int SIZE_ROW, int SIZE_COL)
{

	for (int i = 0; i < SIZE_ROW; i++)
	{
		for (int j = 0; j < SIZE_COL; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}
void showArr(int arr[][5], int SIZE_ROW, int SIZE_COL)
{
	for (int i = 0; i < SIZE_ROW; i++)
	{
		for (int j = 0; j < SIZE_COL; j++)
		{
			cout << " " << arr[i][j];
		}
		cout << endl;
	}
}
int rec(int arr[][5], int i, int j)
{
	cout << " " << arr[i][j];
	if (i == SIZE_ROW - 1 && j == SIZE_COL - 1)
	{
		return 0;
	}
	if (arr[i][j + 1] < arr[i + 1][j] && i < SIZE_ROW - 1)
	{
		return arr[i][j] += rec(arr, i + 1, j);
	}
	else if (arr[i + 1][j] < arr[i][j + 1] && j < SIZE_COL - 1)
	{
		return arr[i][j] += rec(arr, i, j + 1);
	}
	else if (j >= 4)
	{
		return arr[i][j] += rec(arr, i + 1, j);
	}
	else if (i >= 4)
	{
		return arr[i][j] += rec(arr, i, j + 1);
	}
}

