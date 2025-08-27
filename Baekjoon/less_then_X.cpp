#include <iostream>

using namespace std;

int main()
{
    int N, X, T;
    cin >> N >> X;
    int arr[N];

    T = N;
    while(N--)
        cin >> arr[N];
    while(T--)
    {
        if(arr[T] < X)
            cout << arr[T] << " ";
    }
}