#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name[10];
    char password[10];
    char password_again[10];

    cout << "이름 입력:";
    cin >> name;
    cout << endl << "암호 입력:";
    cin >> password;
    cout << endl << "다시 입력:";
    cin >> password_again;
    if(strcmp(password, password_again) == 0)
        cout << endl << name << "께서 로그인하셨습니다.";
    else
        cout << endl << name << "님, 다시 입력하세요.";

    return 0;
}