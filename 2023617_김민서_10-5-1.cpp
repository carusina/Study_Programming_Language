#include <iostream>
using namespace std;

template <class T>
void myswap(T &a, T &b, T &c)
{
    T tmp1, tmp2;
    tmp1 = b;   tmp2 = a;
    b = c;  a = tmp1;   c = tmp2;
}

int main()
{
    int a,b,c;
    cout << "세 정수 입력: ";
    cin >> a >> b >> c;
    myswap(a, b, c);
    cout << a << " " << b << " " << c << endl;

    double d,e,f;
    cout << "세 실수 입력: ";
    cin >> d >> e >> f;
    myswap(d, e, f);
    cout << d << " " << e << " " << f << endl;
}