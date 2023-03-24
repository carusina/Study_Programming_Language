#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    double aver;
    cin >> N;
    int arr[N];

    for(int i = 0; i < N; i++)
    {
        int score = 0;
        cin >> score;
        arr[i] = score;
        sum += arr[i];
    }
    
    int max = arr[0];
    for(int i = 0; i < N; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    aver = sum * 100.0 / (max * N);
    cout << aver << endl;  
}