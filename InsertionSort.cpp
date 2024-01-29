#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	int i;
	int j;
	int temp;
	int array[10];
	srand(time(0));

	cout << "Unsorted elements: ";
	for (i = 0; i < 10; i++)
	{
		array[i] = (rand() % 100) + 1;
		cout << array[i] << "\t";
	}

	for (i = 0; i < 10; i++)
	{
		temp = array[i];
		j = i - 1;

		while ((temp < array[j]) && (j >= 0))
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = temp;
	}

	cout << "\nSorted elements : ";
	for (i = 0; i < 10; i++)
	{
		cout << array[i] << "\t";
	}
	
	cout << "\n\n";
	system("pause");
	return 0;
}