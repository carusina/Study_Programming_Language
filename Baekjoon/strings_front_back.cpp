#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    string str[T];
    
    for(int i = 0; i < T; i++)
        cin >> str[i];
    for(int i = 0; i < T; i++)
        cout << str[i].front() << str[i].back() << endl;
}