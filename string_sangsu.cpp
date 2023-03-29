#include <iostream>

using namespace std;

int main()
{
    string A, B;    cin >> A >> B;
    swap(A[0], A[2]);   swap(B[0], B[2]);
    
    if(stoi(A) > stoi(B))
        cout << stoi(A) << endl;
    else
        cout << stoi(B) << endl;
}