#include <iostream>

using namespace std;

int main()
{
    int count;
    cin >> count;
    int A[count], B[count];

    for(int i = 0; i < count; i++)
        cin >> A[i] >> B[i];
    for(int i = 0; i < count; i++)
        cout << A[i] + B[i] << endl;
}