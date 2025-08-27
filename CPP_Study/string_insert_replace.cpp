#include <iostream>
#include <string>

using namespace std;

int main()
{
    string space = " ";
    string sentence = "I" + space + "coding";
    cout << sentence << endl;

    sentence.insert(2, "hate ");
    cout << sentence << endl;
    
    string find_str = "hate";
    string replace_str = "love";
    sentence.replace(sentence.find(find_str), find_str.length(), replace_str);
    cout << sentence << endl;

    return 0;
}