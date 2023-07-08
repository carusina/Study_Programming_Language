#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    for(int i = 5; i > 0; i--)
        v.push_back(i*10);
    
    auto it = v.end();
    v.insert(it, 100);
    for(it = v.begin(); it != v.end(); it++)
    {   cout << *it << ' '; }
    cout << endl;
    
}