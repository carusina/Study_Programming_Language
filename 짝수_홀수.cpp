#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(int num) {
    string answer[2] = {"Odd", "Even"};
    int i = 0;
    if(num%2 == 0)
        i = 1;
    
    return answer[i];
}

int main()
{
    cout << solution(3) << endl;
}