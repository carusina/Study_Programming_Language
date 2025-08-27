#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int arr[N+1];
    for(int i = 1; i < N+1; i++)
        arr[i] = i;

    while(M--)
    {
        int a = 0, b = 0;
        cin >> a >> b;
        for(int i = a; i <= b; i++)
        {
            int T = 0 , j = b;
            T = arr[i];
            arr[i] = arr[j];
            arr[j] = T;
            b--;
        }
    }

    for(int i = 1; i < N+1; i++)
        cout << arr[i] << " ";
}