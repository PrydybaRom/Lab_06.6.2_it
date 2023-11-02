

// Lab_06.2.it.cpp 

// Варіант 22

#include <iostream>
#include <cmath>
using namespace std;

void FullArr(int t[], const int size, int a, int b);
void PrintArr(int t[], const int size);
int SumArr(int t[], const int size);


void FullArr(int t[], const int size, int a, int b)
{
	for (int i = 0; i < size; i++)
	{
		t[i] = a + rand() % (b - a + 1);
	}
}

void PrintArr(int t[], const int size)
{
	cout << "Array - [";
	for (int i = 0; i < size; i++)
	{
		cout << t[i] << " ";
	}
	cout << "]";
}

int SumArr(int t[], const int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (t[i] % 2 == 0)
		{
			sum += t[i];
		}
	}
	return sum;
}



int main() {

	const int SIZE = 15;
	int a = 0, b = 25;
	
	int arr[SIZE]{};
	FullArr(arr, SIZE, a, b);
	PrintArr(arr, SIZE);
	int sumArr = SumArr(arr, SIZE);
	cout << endl << "Sum item array = " << sumArr;
}
