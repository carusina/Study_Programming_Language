#include <iostream>
using namespace std;

template <class T>
T arr_plus(T *p, int n)
{
    T tmp = *p;
    p++;
    for(int i = 1; i < n; i++)
    {
        tmp += *p;
        p++;
    }
    return tmp;
}


int main()
{
int iarr[] = { 1,2,3,4,5 };
double darr[] = { 1.1, 2.2, 3.3 };
string sarr[] = { "딸기","바나나","우유" };
cout << "정수배열 합은 " << arr_plus(iarr, 5) << endl;
cout << "실수배열 합은 " << arr_plus(darr, 3) << endl;
cout << "string배열 경우는 " << arr_plus(sarr, 3) << endl;
} 