#include <iostream>

using namespace std;

int main()
{
    string S;   cin >> S;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    

    for(int i = 0; i < alphabet.length(); i++)
    {
        if(S.find(alphabet[i]) < S.length())
            cout << S.find(alphabet[i]) << " ";
        else
            cout << -1 << " ";
    }
}