#include <iostream>

using namespace std;

int main()
{
    string sentence;    getline(cin, sentence);
    int count_word = 0;

    if(sentence[0] == ' ' || sentence[sentence.length() - 1] == ' ')
    {
        if(sentence[0] == ' ' && sentence[sentence.length() - 1] == ' ')
            count_word = -2;
        else
            count_word = -1;
    }
    
    for(int i = 0; i < sentence.length(); i ++)
    {
        if(sentence[i] == ' ')
            count_word++;
    }

    cout << count_word + 1 << endl;
}