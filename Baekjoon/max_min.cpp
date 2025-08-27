#include <iostream>

using namespace std;

int main()
{
    int N, F, max_index, min_index;
    cin >> N;
    F = N;

    int arr[N];
    while(N--)
        cin >> arr[N];
    
    max_index = arr[0];
    min_index = arr[0];
    while(F--)
    {
        if(arr[F] > max_index)
            max_index = arr[F];
        else if(arr[F] < min_index)
            min_index = arr[F];
    }
    cout << min_index << " " << max_index << endl;
}