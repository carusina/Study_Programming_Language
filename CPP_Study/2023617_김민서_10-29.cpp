#include <iostream>
#include <map>
#include <fstream>
using namespace std;

int main()
{
    map<string, string> m;
    ofstream fout("capital.txt");

    string country, capital;
    while(true)
    {

        cout << "나라 수도: ";
        cin >> country;     if(country == "exit") break;
        cin >> capital;
        if(m.count(country) != 0)
        {
            char yn;
            cout << "이미 등록된 나라입니다. 수정할까요? (y/n): ";  cin >> yn;
            if(yn == 'y')
            {   m[country] = capital;   }
        }
        m.insert(make_pair(country, capital));
    }
    for(map<string, string>::iterator   it = m.begin(); it != m.end(); it++)
    {   fout << it->first << ' ' << it->second << endl; }
    cout << m.size() << " 나라의 수도 정보를 capital.txt에 저장하였습니다. 감사합니다." << endl;
}