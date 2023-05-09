//Write a function that receives a pointer to an array and its size,
//and returns the number of negative, positive, and zero array elements.

#include <iostream>

using namespace std;
void Mas(int* arr, int* size, int* cont_nul, int* cont_plus, int* cont_minus);
void ShowArr(int* arr, int* size, int* cont_nul, int* cont_plus, int* cont_minus);

int main()
{
    int arr[] = { 12, 0, -3, 43, 0, -1, -12, 22 };
    int size = sizeof(arr) / sizeof(int);
    int cont_nul = 0;
    int cont_plus = 0;
    int cont_minus = 0;
    Mas(arr, &size, &cont_nul, &cont_plus, &cont_minus);
    ShowArr(arr, &size, &cont_nul, &cont_plus, &cont_minus);
}

void Mas(int* arr, int* size, int* nul, int* plus, int* minus)
{

    for (int i = 0; i < *size; i++)
    {
        if (arr[i] == 0)
        {
            *nul += 1;
        }
        if (arr[i] < 0)
        {
            *minus += 1;
        }
        if (arr[i] > 0)
        {
            *plus += 1;
        }
    }

}

void ShowArr(int* arr, int* size, int* cont_nul, int* cont_plus, int* cont_minus)
{
    cout << "Null number: " <<  *cont_nul << endl;
    cout << "Pisitive number: " << *cont_plus << endl;
    cout << "Negative number: " << *cont_minus << endl;
}