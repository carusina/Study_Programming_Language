#include <iostream>
using namespace std;

class ThreeMatrices
{
    int a[3][5] = {{5, 10, 2, 7, 5}, {4, 6, 2, 2, 9}, {1, 9, 2, 8, 4}};
    int b[3][5] = {{5, 2, 7, 4, 5}, {10, 6, 9, 2, 3}, {2, 6, 4, 7, 1}};
    int c[3][5] = {0};

    public:
        void printC()
        {
            for(int *p = c[0]; p != c[3]; p++)
            {
                if(p == c[1] || p == c[2])
                    cout << endl;
                cout << *p << " ";
            }
            cout << endl;
        }
        void bulid(char ch)
        {
            if(ch == '+')
            {
                for(int i = 0; i < 3; i++)
                {
                    for(int j = 0; j < 5; j++)
                        c[i][j] = a[i][j] + b[i][j];
                }
            }
            else if(ch == '-')
            {
                for(int i = 0; i < 3; i++)
                {
                    for(int j = 0; j < 5; j++)
                        c[i][j] = a[i][j] - b[i][j];
                }
            }
        }
};

int main()
{
    ThreeMatrices m;
    cout << "Add..." << endl;   m.bulid('+');   m.printC();
    cout << "Subtract..." << endl;  m.bulid('-');   m.printC();
}