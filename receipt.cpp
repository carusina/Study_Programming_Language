#include <iostream>

using namespace std;

int main()
{
    int total_price, total_ea, price, ea, sum_price = 0;
    cin >> total_price;
    cin >> total_ea;

    for(int i = 0; i < total_ea; i++)
    {
        cin >> price >> ea;
        sum_price += price * ea;
    }
    
    if(total_price == sum_price)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}