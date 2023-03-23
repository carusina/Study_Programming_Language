#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int arr[N];

    for(int i = 0; i < N; i++)
        arr[i] = 0;

    while(M--)
    {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        for(int i = a-1; i <= b-1; i++)
            arr[i] = c;
    }

    for(int i = 0; i < N; i++)
        cout << arr[i] << " ";
}