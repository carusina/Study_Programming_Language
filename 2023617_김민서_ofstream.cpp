#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;

    fout.open("movie.txt");

    if(!fout)
    {
        cerr << "파일 열기 실패";   return 0;
    }

    int age = 50;
    string actor = "키아누 리브스", movie = "John Wick";
    fout << age << endl;
    fout << actor << endl;
    fout << movie << endl;

    fout.close();
}