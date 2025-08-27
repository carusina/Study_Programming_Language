#include <iostream>
using namespace std;

int arr_plus(int *p, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += *p;
        p++;
    }
    return sum;
}

double arr_plus(double *p, int n)
{
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += *p;
        p++;
    }
    return sum;
}

int main()
{
    int iarr[] = { 1, 2, 3, 4, 5 };
    double darr[] = { 1.1, 2.2, 3.3 };

    cout << "정수배열 합은 " << arr_plus(iarr, 5) << endl;
    cout << "실수배열 합은 " << arr_plus(darr, 3) << endl;
}