#include <iostream>
#include <random>
#include <unistd.h>
using namespace std;

void move_cur(int x, int y)
{   printf("\033[%d;%dH", y, x);    }

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist_x(0, 50);
    uniform_int_distribution<> dist_y(3, 22);

    int count = 0;
    while(1)
    {
        int x = dist_x(gen), y = dist_y(gen);
        move_cur(x, y);
        cout << "★" << endl;
        usleep(1000*50);
        if(count++ == 100)
        {   break;  }
    }
}