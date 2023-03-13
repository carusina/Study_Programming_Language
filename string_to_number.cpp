#include <iostream>
#include <string>
#include <sstream> // stringstream 사용을 위해 인클루드

using namespace std;

int main()
{
    string str1 = "10";
    string str2 = "2.456";
    string str3 = "456 abc";

    int num1 = stoi(str1); int num2 = stoi(str2); int num3 = stoi(str3); // 문자열의 숫자를 정수로 변환

    cout << num1 << ", " << num2 << ", " << num3 << endl;

    stringstream ss;
    double number1 = 0.0;

    ss << "1.2,2.6-3.8!4.7=8.9";

    cout << "== string to double ==" << endl;
    while(!ss.eof()) // ss.eof()는 ss를 다 읽지 않았으면 false를 리턴
    {
        ss >> number1; // ss에서 읽은 double형의 값을 number1 변수에 저장 ==> number1 == 1.2 ==> 읽고나면 읽은 데이터로 간주되어 읽지 않음
        ss.ignore(); // ss에 문자 1개를 무시 1.2는 읽었으니 콤마 무시// , => - => ! => =
        /* ex) ignore(10, '=')이면 문자 10개를 지우는중 =을 만나면 =까지 지우고 중지 */

        cout << number1 << ", ";
    }
    ss.clear(); // ss 객체의 내부 상태 플래그를 초기화 ==> (여기선) 다 읽어서 읽을 수 없는 것을 초기화
    ss.str(""); // ss 초기화

    ss << "1," << "2" << 3 << " " << 4; //ss == "1,23 4"

    int number2 = 0;

    cout << endl << "== string to int ==" << endl;
    while(!ss.eof())
    {
        ss >> number2;
        ss.ignore();

        cout << number2 << ", ";
    }

    return 0;
}