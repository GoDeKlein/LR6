#include <iostream>
#include <iomanip>
#include "windows.h"
#include "time.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int b = 0;
	int a[5];
	int x = 36;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		a[i] = rand() % (x + 1);
		cout << setw(4) << a[i];
	}
	for (int i = 0; i < 5; i++)
		if (a[i] % 6 == 0)
		{
			b++;
		}
	cout << "\nКількість кратних 6 =" << b;


	int min = 0;
	for (int i = 1; i < 5; i++)
		if (a[i] < a[min])
			min = i;
	cout << "\nМінімальний елемент a[" << min << "] = " << a[min];
}



