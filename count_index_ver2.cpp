#include <iostream>

using namespace std;

int main()
{
    int N, F, arr[100], count = 0;

    cin >> N;
    F = N;
    while(N--)
        cin >> arr[N];
    cin >> N;
    while(F--)
    {
        if(arr[F] == N)
            count++;
    }
    cout << count << endl;
}