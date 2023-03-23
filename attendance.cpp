#include <iostream>

using namespace std;

int main()
{
    int N = 30, T = 28, arr[N];
    for(int i = 1; i < N + 1; i++)
        arr[i] = i;

    while(T--)
    {
        int a;
        cin >> a;
        arr[a] = 0;
    }
    for(int i = 1; i < N + 1; i++)
    {
        if(arr[i] != 0)
            cout << arr[i] << endl;
    }
}