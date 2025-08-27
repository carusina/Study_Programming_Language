#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes)
{
    int end_x = park[0].size()-1, end_y = park.size()-1;
    int curr_x = 0, curr_y = 0;
    vector<int> answer;

    vector<string>::iterator iter_park;
    for(iter_park = park.begin(); iter_park != park.end(); iter_park++)
    {
        string str = *iter_park;
        bool find = false;

        for(int i = 0; i <= end_x; i++)
        {
            if(str[i] == 'S')
            {   curr_x = i;  find = true;  break;  }
        }

        if(find == true)
        {   break;  }

        curr_y++;
    }   
    
    vector<string>::iterator iter_routes;
    for(iter_routes = routes.begin(); iter_routes != routes.end(); iter_routes++)
    {
        int next_x = curr_x, next_y = curr_y;
        string str = *iter_routes;
        string str2 = *iter_park;
        int num = str[2]-48;
        bool can = true;
        vector<string>::iterator iter_park_next = iter_park;

        if(str[0] == 'E')
        {
            next_x = curr_x + num;
            if(next_x <= end_x)
            {
                for(int i = curr_x+1; i <= next_x; i++)
                {
                    if(str2[i] == 'X')
                    {   can = false;    }
                }
                if(can == true)
                {   curr_x = next_x;    }
            }
        }
        else if(str[0] == 'W')
        {
            next_x = curr_x - num;
            if(next_x >= 0)
            {
                for(int i = next_x; i < curr_x; i++)
                {
                    if(str2[i] == 'X')
                    {   can = false;    break;    }
                }
                if(can == true)
                {   curr_x = next_x;    }
            }
        }
        else if(str[0] == 'S')
        {
            next_y = curr_y + num;
            if(next_y <= end_y)
            {
                for(int i = curr_y+1; i <= next_y; i++)
                {
                    string str3 = *++iter_park_next;
                    if(str3[curr_x] == 'X')
                    {   can = false;    break;  }
                }
                if(can == true)
                {   curr_y = next_y;    iter_park = iter_park_next; }
            }
        }
        else
        {
            next_y = curr_y - num;
            if(next_y >= 0)
            {
                for(int i = next_y; i < curr_y; i++)
                {
                    string str3 = *--iter_park_next;
                    if(str3[curr_x] == 'X')
                    {   can = false;    break;  }
                }
                if(can == true)
                {   curr_y = next_y;    iter_park = iter_park_next; }
            }
        }
    }
    answer.push_back(curr_y);   answer.push_back(curr_x);

    return answer;
}

int main()
{
    vector<string> park;
    park.push_back("SOOOO");
    park.push_back("OXOOO");
    park.push_back("OOXOO");
    vector<string> routes;
    routes.push_back("E 3");    routes.push_back("W 3");
    vector<int> answer = solution(park, routes);

    cout << answer[0] << "," << answer[1] << endl;
}