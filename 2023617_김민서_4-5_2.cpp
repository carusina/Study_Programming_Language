#include <iostream>
using namespace std;

void myswap(double &c, double &d)
{
    double tmp;
    tmp = c;
    c = d;
    d = tmp;
}

int main()
{
    double a, b;
    cout << "두 수 입력: ";
    cin >> a >> b;
    cout << "a: " << a << ", b: " << b << endl;

    myswap(a, b);
    cout << "a: " << a << ", b: " << b << endl;
}