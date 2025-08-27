#include <iostream>

using namespace std;

int main()
{
    int H, M;
    cin >> H >> M;

    if(M < 45)
    {
        if(H == 0)
            H = 24;
        H -= 1;
        M += 15;
        cout << H << " " << M << endl;
    }
    else
        cout << H << " " << M - 45 << endl;
}