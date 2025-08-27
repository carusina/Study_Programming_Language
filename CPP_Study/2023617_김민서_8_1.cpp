#include <iostream>
using namespace std;

class A
{
    public:
        double volume(int r)
        {   return 4/3.0 * 3.141592 * r * r * r; }
};

class B : public A
{
    public:
        double circumference(int r)
        {   return 2 * 3.141592 * r; } 
};

int main()
{
    B b;
    int r;
    cout << "반지름 입력: ";    cin >> r;
    cout << "구의 부피는 " << b.volume(r) << " 입니다." << endl;
    cout << "원의 둘레는 " << b.circumference(r) << " 입니다." << endl;
}