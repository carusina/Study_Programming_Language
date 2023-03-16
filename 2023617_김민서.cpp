#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[100] = "안녕하세요?";
    char b[100] = "날씨가 참 좋군요.";
    char c[100] = "안녕히 계세요!";

    cout << "함수 사용" << endl;
    cout << strlen(a) << " " << strlen(b) << " " << strlen(c) << endl;

    cout << "반복문으로 계산" << endl;
    int count_a = 0;
    int count_b = 0;
    int count_c = 0;

    for(int i = 0; a[i] != '\0'; i++)
        count_a++;
    for(int i = 0; b[i] != '\0'; i++)
        count_b++;
    for(int i = 0; c[i] != '\0'; i++)
        count_c++;
    cout << count_a << " " << count_b << " " << count_c << endl;
}