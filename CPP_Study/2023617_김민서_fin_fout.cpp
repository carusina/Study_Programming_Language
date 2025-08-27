#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int temp, sum = 0;

    ofstream fout("a.txt");
    if(!fout) { cerr << "파일을 열 수가 없습니다."; return 0; }
    for(int i = 0; i < 5; i++)
    {   cin >> temp;    fout << temp << endl; }
    fout.close();

    ifstream fin("a.txt");
    ofstream fout2("b.txt");
    if(!fin || !fout2) {    cerr << "파일을 열 수가 없습니다."; return 0; }
    for(int i = 0; i < 5; i++)
    {   fin >> temp;    sum += temp; }
    fout2 << "합계: " << sum << endl;
    fout2 << "평균: " << sum / 5.0;
    fin.close();    fout2.close();

    cout << "처리 완료. b.txt를 열어서 결과를 확인하세요." << endl;
}