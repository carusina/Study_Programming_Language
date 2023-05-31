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
    string m[100][2];
    int size = 0;

    while(true)
    {
        fin >> m[size][0] >> m[size][1];
        if(fin.eof()) { break;  }
        size++;
    }
    fin.close();
    // print_2dim_array(m, size);

    cout << "---------------------" << endl;
    cout << "총 동물의 수 = " << size << endl;
    cout << "---------------------" << endl;

    string a;
    while(true)
    {
        cout << "찾고 싶은 동물: ";
        getline(cin, a);
        if(a == "exit") {   break;  }

        for(int i = 0; i < size; i++)
        {
            if(m[i][0] == a)
            {   cout << "--> " << m[i][1] << endl;  break;  }
            else if(i == size-1)
            {   cout << "미등록 동물입니다." << endl;   }
        }
    }
    cout << "이용해주셔서 감사합니다" << endl;
}