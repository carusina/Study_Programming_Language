#include <iostream>

using namespace std;

int main()
{
    int N, score, sum = 0, max = 0;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> score;
        sum += score;
        max = max > score ? max : score;
    }
    cout << sum * 100.0 / N / max << endl;
}