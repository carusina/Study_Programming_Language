#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0; cin >> N;
    string numbers; cin >> numbers;
    string numbers_for_sum[N];
    
    for(int i = 0; i < N; i++)
    {
        numbers_for_sum[i] = numbers.at(i);
        sum += stoi(numbers_for_sum[i]);
    }
    cout << sum << endl;
}