#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int computer, user, scissor, rock, paper;
    srand(time(0));
    computer = rand() % 3;

    cout << "scissor(0), rock(1), paper(2): ";
    cin >> user;

    if(computer == 0)
    {
        cout << "The computer is scissor.";
        if(user == 1)
            cout << " You are rock. You won" << endl;
        else if(user == 2)
            cout << " You are paper. You lose" << endl;
        else
            cout << " You are scissor too. It is draw" << endl;
    }
    else if(computer == 1)
    {
        cout << "The computer is rock.";
        if(user == 0)
            cout << " You are scissor. You lose" << endl;
        else if(user == 2)
            cout << " You are paper. You won" << endl;
        else
            cout << " You are rock too. It is draw" << endl;
    }
    else
    {
        cout << "The computer is paper.";
        if(user == 0)
            cout << " You are scissor. You won" << endl;
        else if(user == 1)
            cout << " You are rock. You lose" << endl;
        else
            cout << " You are paper too. It is draw" << endl;
    }
}