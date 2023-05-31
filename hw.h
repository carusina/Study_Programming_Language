#pragma once
#include <iostream>
#include <map>
using namespace std;

template <typename K, typename V> void print_map(map<K, V> m)
{
    for(typename map<K, V>::iterator it = m.begin(); it != m.end(); it++)
    {   cout << it->first << ' ' << it->second << endl; }
}

template <typename T> void print_2dim_array(T m[][2], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < 2; j++)
        {   cout << m[i][j]<< ' '; }
        cout << endl;
    }
}