#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout("result.txt");
    ifstream fin("score.txt");
    double sum = 0; int max_index = 0; int index = 0;
    string name[31]; double score[31];
    
    while(!fin.eof())
    {
        getline(fin, name[index], ' ');
        fin >> score[index];
        fin.get();  fin.ignore();
        sum += score[index];
        if(score[index] > score[max_index])
            max_index = index;
        index++;
    }

    fout << fixed;
    fout.precision(2);
    fout << "합계: " << sum << endl;
    fout << "평균: " << sum /31 << endl;
    fout << "최고점: " << name[max_index] << ' ' << score[max_index];

    fin.close(); fout.close();
}