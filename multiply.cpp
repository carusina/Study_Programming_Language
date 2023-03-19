#include <iostream>

using namespace std;

int main()
{
    int num1 ,num2;
    
    cin >> num1 >> num2;
    cout << num1 * (num2%10) << endl << num1 * (num2%100-num2%10)/10 << endl << num1 * (num2-num2%100)/100 << endl << num1 * num2;
}