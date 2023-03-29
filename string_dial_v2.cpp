#include <iostream>

using namespace std;

int main()
{
    char alpha; int sec = 0;
    
    while(cin >> alpha)
        sec += "00011122233344455556667777"[alpha - 65] - 45;
    cout << sec << endl;
}