//Write a function that accepts two pointers to arrays 
//of integers and their sizes, and returns a pointer to 
//a new array that contains only those elements 
//that are in both arrays.

#include <iostream>

using namespace std;

void Mas(int* arr_one, int* arr_two, int* arr_three, int* size);

int main()
{
    int arr_one[] = { 12, 32, 44, 5, 9 };
    int arr_two[] = { 99, 6, 5, 11, 12 };
    int size = sizeof(arr_one) / sizeof(int);
    int* arr_three = new int;

    Mas(arr_one, arr_two, arr_three, &size);
}

void Mas(int* arr_one, int* arr_two,int* arr_three, int* size)
{
    int cont = 0;
    for (int i = 0, k = 0; i < *size; i++)
    {
        for (int j = 0; j < *size; j++)
        {
            if (arr_two[j] == arr_one[i])
            {
                arr_three[k] = arr_one[i];
                k++;
                cont++;
            }
        }
    }
    cout << "Common elements: ";
    for (int i = 0; i < cont; i++)
    {
        cout << arr_three[i] << " ";
    }
    cout << endl;
}

