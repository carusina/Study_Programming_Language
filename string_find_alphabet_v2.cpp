#include <iostream>

using namespace std;

int main()
{
	string str;     cin >> str;
	for (int i = 97; i < 123; i++)
		cout << (int)str.find(i) << ' ';
}