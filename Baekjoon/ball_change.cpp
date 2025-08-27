#include <iostream>

using namespace std;

int main()
{
    int N, M, T = 0;
    cin >> N >> M;
    int arr[N];

    for(int i = 0; i < N; i++)
        arr[i] = i + 1;
    
    while(M--)
    {
        int A, B;
        cin >> A >> B;
        T = arr[A-1];
        arr[A-1] = arr[B-1];
        arr[B-1] = T;
    }
    for(int i = 0; i < N; i++)
        cout << arr[i] << " ";
}