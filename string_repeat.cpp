#include <iostream>

using namespace std;

int main()
{
    int T;  cin >> T;
    int arr[T];
    string  str[T];

    for(int i = 0; i < T; i++)
        cin >> arr[i] >> str[i];

    for(int i = 0; i < T; i++)
    {
        for(int j = 0; j < str[i].length(); j++)
        {
            for(int k = 0; k < arr[i]; k++)
                cout << str[i][j];
        }
        cout << endl;
    }
}