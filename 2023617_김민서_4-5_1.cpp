#include <iostream>
using namespace std;

void myswap(double *px, double *py)
{
    double tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
}

int main()
{
    double a, b;
    cout << "두 수 입력: ";
    cin >> a >> b;
    cout << "a: " << a << ", b: " << b << endl;

    myswap(&a, &b);
    cout << "a: " << a << ", b: " << b << endl;
}