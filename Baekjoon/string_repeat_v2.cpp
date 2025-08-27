#include <iostream>

using namespace std;


int main()
{
    int T;  cin >> T;
    
    while(T--)
    {
        string str;
        int N;
        cin >> N >> str;

        for(char s : str)
        {
            for(int i = 0; i < N; i++)
                cout << s;
        }
        cout << endl;
    }
}