#include <iostream>

using namespace std;

int main()
{
    string alpha;   cin >> alpha;
    int sec = 0;;

    for(int i = 0; i < alpha.length(); i++)
    {
        if(alpha[i] == 65 || alpha[i] == 66 || alpha[i] == 67)
            sec += 3;
        else if(alpha[i] == 68 || alpha[i] == 69 || alpha[i] == 70)
            sec += 4;
        else if(alpha[i] == 71 || alpha[i] == 72 || alpha[i] == 73)
            sec += 5;
        else if(alpha[i] == 74 || alpha[i] == 75 || alpha[i] == 76)
            sec += 6;
        else if(alpha[i] == 77 || alpha[i] == 78 || alpha[i] == 79)
            sec += 7;
        else if(alpha[i] == 80 || alpha[i] == 81 || alpha[i] == 82 || alpha[i] == 83)
            sec +=8;
        else if(alpha[i] == 84 || alpha[i] == 85 || alpha[i] == 86)
            sec +=9;
        else if(alpha[i] == 87 || alpha[i] == 88 || alpha[i] == 89 || alpha[i] == 90)
            sec += 10;
    }
    cout << sec << endl;
}