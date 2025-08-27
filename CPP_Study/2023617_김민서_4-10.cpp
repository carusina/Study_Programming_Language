#include <iostream>
using namespace std;

int main()
{
    int c[3][5] = { {1, 3, 5, 77, 9}, {10, 20, 3, 4, -1}, {0, 0, 8, 5, 3}};

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }

    for(int *p = c[0]; p != c[3]; p++)
    {
        if(p == c[1] || p == c[2])
            cout << endl;
        cout << *p << " ";
    }
    cout << endl;
}