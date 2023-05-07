#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char source[] = "source.txt";
    ifstream fin(source);
    ofstream fout("copy.txt");
    if(!fin) { cout << source << "열기 오류";   return 0; }

    int count = 0;
    int c;
    while((c = fin.get()) != EOF)
    {
        cout << (char)c;
        count++;
        fout << (char)c;
    }

    cout << "--------------------" << endl;
    cout << "읽은 바이트 수는 " << count << endl;
    fin.close();
}