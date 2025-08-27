#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("student.txt");

    if(!fin) {  cerr << "파일을 열 수가 없습니다."; return 0; }

    string name, dept;
    int sid;
    
    fin >> name;    fin >> sid; fin >> dept;

    cout << name << endl;
    cout << sid << endl;
    cout << dept << endl << endl;

    fin.close();
}