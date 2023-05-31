#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "hw.h"
using namespace std;

int main()
{
    ifstream fin("동물사전.txt");
    if(!fin) { cerr << "사전 열기 실패";    return 0;   }

    map<string, string> m;
    string a, b;
    while(true)
    {
        fin >> a >> b;
        if(fin.eof()) { break;  }
        m[a] = b;
    }
    fin.close();
    // print_map(m);

    cout << "---------------------" << endl;
    cout << "총 동물의 수 = " << m.size() << endl;
    cout << "---------------------" << endl;

    while(true)
    {
        cout << "찾고 싶은 동물: ";
        getline(cin, a);
        if(a == "exit") {   break;  }

        if(m.count(a) == 0)
        {   cout << "미등록 동물입니다." << endl;   }
        else
        {   cout << "--> " << m[a] << endl; }
    }
    cout << "이용해주셔서 감사합니다" << endl;
}