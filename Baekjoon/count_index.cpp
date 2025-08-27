#include <iostream>

using namespace std;

int main()
{
    int N, find_num, count = 0;
    cin >> N;
    int arr[N];
    
    for(int i = 0; i < N; i++)
        cin >> arr[i];

    cin >> find_num;
    for(int i = 0; i < N; i++)
    {
        if(arr[i] == find_num)
            count++; 
    }
    cout << count << endl;
}