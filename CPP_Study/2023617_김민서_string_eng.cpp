#include <iostream>
#include <string>

using namespace std;

int main()
{
    string qusetion[] = {"개", "고양이", "기린", "코끼리", "표범"};
    string answer[] = {"dog", "cat", "giraffe", "elephant", "leopard"};
    string ox;
    int score(0);
    
    cout << "영단어로 바꾸세요." << endl;
    for(int i=0; i<5; i++)
    {
        string user_answer;
        cout << qusetion[i] << ": ";
        getline(cin, user_answer);
        if(user_answer == answer[i])
        {
            score += 20;
            ox += "O";
        }
        else
            ox += "X";

    }
    cout << "==> " << ox << " " << score << "점입니다." << endl;
}