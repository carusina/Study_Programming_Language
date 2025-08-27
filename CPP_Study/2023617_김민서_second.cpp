#include <iostream>

using namespace std;

class ConvertSecond
{
    int hour, minute, second;

    public:
        /* 선언부 */
        ConvertSecond();
        void setDate();
        int getResult();
};
/* 구현부 */
ConvertSecond::ConvertSecond()
{
    hour = 0; minute = 0; second = 0;
}
void ConvertSecond::setDate()
{
    cout << "시(hour) 입력: ";  cin >> hour;
    cout << "분(minute) 입력: ";  cin >> minute;
    cout << "초(second) 입력: ";  cin >> second;
}
int ConvertSecond::getResult()
{
    return hour * 60 * 60 + minute * 60 + second;
}

int main()
{
    ConvertSecond a;
    a.setDate();
    cout << "입력하신 시간은 총 " << a.getResult() << " 초 입니다." << endl;

    ConvertSecond b;
    cout << "기본 시간은 총 " << b.getResult() << " 초 입니다." << endl;
}