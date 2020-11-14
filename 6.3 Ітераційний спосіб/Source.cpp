#include <iostream>
#include <cstdlib>
#include<iomanip>
using namespace std;
const int N = 10;
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
int main()
{
	int mass[N], min;
	cout << "Елементи: |";
	for (int r = 0; r < N; r++)
	{
		mass[r] = rand() % 99;
		cout << mass[r] << "|";
	}
	cout << endl;
	min = mass[0];
	for (int r = 1; r < N; r++)
	{
		if (min > mass[r]) min = mass[r];
	}
	cout << "Min: " << min << endl;
	return 0;
}