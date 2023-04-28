#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string name, dept;
    int sid;

    cout << "이름: ";   cin >> name;
    cout << "학번: ";   cin >> sid;
    cout << "학과: ";   cin >> dept;

    ofstream fout("student.txt");
    if(!fout) { cerr << "파일 열기 실패";   return 0;}

    fout << name << endl;
    fout << sid << endl;
    fout << dept << endl;

    fout.close();
}