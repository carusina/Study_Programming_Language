#include <iostream>
#include <fstream>
using namespace std;
#define N 10

int main()
{
    int a[N];
    ifstream fin("a.txt");
    ofstream fout("b.txt");

    if(!fin || !fout) { cerr << "파일 열기 실패" << endl; }

    for(int i = 0; i < N; i++)  fin >> a[i];
    for(int i = N-1; i >= 0; i--)   fout << a[i] << endl;

    fin.close();
    fout.close();
    cout << "처리 완료. b.txt를 열어서 결과를 확인하세요." << endl;
}