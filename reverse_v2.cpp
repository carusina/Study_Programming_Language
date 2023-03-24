#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[101], n, m;
    cin >> n >> m;
    
    for(int i = 0; i <= n; i++)
        arr[i] = i;
    
    for(int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        reverse(arr + x, arr + y + 1);
    }

    for(int i = 1; i <= n; i++)
        cout << arr[i] << " ";
}