#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("dooli_before.txt");
    ofstream fout("dooli_after.txt");
    string str, find_str, replace_str;

    getline(fin, str, '&');
    cout << "find: ";   cin >> find_str;
    cout << "replace: ";    cin >> replace_str;

    int sindex = 0;
    while(true)
    {
        int findex = str.find(find_str, sindex);
        if(findex == -1)    break;
        str.replace(findex, find_str.length(), replace_str);
        sindex = findex + replace_str.length();
    }
    fout << str;

    fin.close(); fout.close();
}