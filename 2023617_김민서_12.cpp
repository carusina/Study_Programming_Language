#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("b.txt", ios::app);
    ifstream fin1("a1.txt");
    ifstream fin2("a2.txt");
    ifstream fin3("a3.txt");
    if(!fout || !fin1 || !fin2 || !fin3) { cerr << "파일 열기 실패"; }

    int c;
    while((c = fin1.get()) != EOF)
    {   fout << (char)c; }
    fout << endl;
    while((c = fin2.get()) != EOF)
    {   fout << (char)c; }
    fout << endl;
    while((c = fin3.get()) != EOF)
    {   fout << (char)c; }

    cout << "파일 추가 쓰기 완료" << endl;
    fout.close();
    fin1.close();   fin2.close();   fin3.close();
}