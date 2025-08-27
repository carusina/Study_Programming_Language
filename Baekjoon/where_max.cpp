  #include <iostream>

using namespace std;

int main()
{
    int N = 9, max = 0, max_index = 0, arr[N];
    while(N--)
    {
        cin >> arr[N];
        if(arr[N] > max)
        {
            max = arr[N];
            max_index = 9-N;
        }
    }
    cout << max << endl << max_index << endl;
}