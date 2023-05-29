#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string X, string Y)
{
    string answer = "";
    int X_num[10] = {0};
    int Y_num[10] = {0};
    int XY_num[10] = {0};

    for(int i = 0; i < X.length(); i++)
    {   X_num[X[i]-48]++;   }
    
    for(int i = 0; i < Y.length(); i++)
    {   Y_num[Y[i]-48]++;   }

    for(int i = 0; i < 10; i++)
    {
        if(X_num[i] < Y_num[i])
        {   XY_num[i] = X_num[i];   }
        else
        {   XY_num[i] = Y_num[i];   }
    }

    for(int i = 9; i >= 0; i--)
    {
        int num = i + 48;
        for(int j = 0; j < XY_num[i]; j++)
        {   answer += num;  }
    }
    if(answer[0] == '0')
    {   answer = '0';   }
    else if(answer == "")
    {   answer = "-1";  }

    return answer;
}

int main()
{
    string answer = solution("1234567890", "9876543210");
    cout << answer << endl;
}