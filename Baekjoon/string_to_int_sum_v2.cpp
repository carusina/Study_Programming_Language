#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0; cin >> N;
    char num[N];
    while(N--)
    {
        cin >> num[N];
        sum += num[N] - 48;
    }
    cout << sum << endl;
}