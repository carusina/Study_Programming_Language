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
    {
        int x = X[i]-48;
        if(x == 0)
        {   X_num[0] += 1;  }
        else if(x == 1)
        {   X_num[1] += 1;  }
        else if(x == 2)
        {   X_num[2] += 1;  }
        else if(x == 3)
        {   X_num[3] += 1;  }
        else if(x == 4)
        {   X_num[4] += 1;  }
        else if(x == 5)
        {   X_num[5] += 1;  }
        else if(x == 6)
        {   X_num[6] += 1;  }
        else if(x == 7)
        {   X_num[7] += 1;  }
        else if(x == 8)
        {   X_num[8] += 1;  }
        else if(x == 9)
        {   X_num[9] += 1;  }
        
    }
    
    for(int i = 0; i < Y.length(); i++)
    {
        int y = Y[i]-48;
        if(y == 0)
        {   Y_num[0] += 1;  }
        else if(y == 1)
        {   Y_num[1] += 1;  }
        else if(y == 2)
        {   Y_num[2] += 1;  }
        else if(y == 3)
        {   Y_num[3] += 1;  }
        else if(y == 4)
        {   Y_num[4] += 1;  }
        else if(y == 5)
        {   Y_num[5] += 1;  }
        else if(y == 6)
        {   Y_num[6] += 1;  }
        else if(y == 7)
        {   Y_num[7] += 1;  }
        else if(y == 8)
        {   Y_num[8] += 1;  }
        else if(y == 9)
        {   Y_num[9] += 1;  }
        
    }

    for(int i = 0; i < 10; i++)
    {
        if(X_num[i] < Y_num[i])
        {   XY_num[i] = X_num[i];   }
        else
        {   XY_num[i] = Y_num[i];   }
        cout << XY_num[i] << ", ";
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
    cout << endl << answer << endl;
}