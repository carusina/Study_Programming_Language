#include <iostream>

using namespace std;

int main()
{
    int H, M, need_time;
    cin >> H >> M;
    cin >> need_time;

    H = ((need_time /60 + H) + (need_time % 60 + M >= 60)) % 24;
    M = (need_time % 60+ M) % 60;

    cout << H << " " << M << endl;
}