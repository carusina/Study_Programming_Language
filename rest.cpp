#include <iostream>

using namespace std;

int main()
{
    int N = 10, arr[10], T = 0, count = 0;
    while(N--)
    {
        cin >> arr[N];
        T = arr[N] % 42;
        arr[N] = T;
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(arr[i] == arr[j])
                arr[j] = -1;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        if(arr[i] != -1)
            count++;
    }
    cout << count << endl;
}