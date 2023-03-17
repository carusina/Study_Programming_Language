#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, password, re_password;
    cout << "이름 입력: ";
    cin >> name;
    cout << "암호 입력: ";
    cin >> password;
    cout << "다시 입력: ";
    cin >> re_password;

    if(password == re_password)
        cout << name << "님께서 로그인하셨습니다.";
    else
        cout << name << "님, 다시 입력하세요.";
}