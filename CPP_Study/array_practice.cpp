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
    /*
    int N, F, T, max_index, min_index;
    cin >> N;
    F = N;
    T = N;

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

    max_index = *max_element(arr, arr + sizeof(arr)/sizeof(*arr));
    min_index = *min_element(arr, arr+T);
    cout << min_index << " " << max_index << endl;
    */
}