//Write a function that receives a pointer to an array and its size. 
//The function should remove all negative numbers from the array and 
//return a pointer to the new array.

#include <iostream>

using namespace std;

void GenerateNum(int* array, int* size);//create masiv
void Newarr(int* array, int* size);//new masiv

int main()
{
	int array[10];
	int size = sizeof(array) / sizeof(int);
	GenerateNum(array, &size);
	Newarr(array, &size);
}

void GenerateNum(int* array, int* size)
{
	srand(time(NULL));
	for (int i = 0; i < *size; i++)
	{
		int random = rand() % 10 + -3;
		array[i] = random;
	}
	for (int i = 0; i < *size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void Newarr(int* array, int* size)
{
	int* new_array = new int;
	int cont = 0;
	for (int i = 0,k = 0; i < *size; i++)
	{
		if (*(array + i) >= 0)
		{
			*(new_array + k) = *(array + i);
			k++;
			cont++;
		}
	}
	for (int i = 0; i < cont; i++)
	{
		cout << new_array[i] << " ";
	}
}


