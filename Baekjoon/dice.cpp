#include <iostream>

using namespace std;

int main()
{
    int A, B, C, same_count;
    cin >> A >> B >> C;
    same_count = (A == B) + (B == C) + (C == A);

    if(same_count == 2 || same_count == 3)
        cout << 10000 + A * 1000 << endl;
    else if(same_count == 1)
        cout << 1000 + (A == B ? A : A == C ? A : B) * 100 << endl;
    else
    {
        int max;
        max = (A > B && A > C ? A : B > C ? B : C);
        cout << max * 100 << endl;
    }
}