#include <bits/stdc++.h>
using namespace std;

int main()
{
        list<int> li;
        li.push_back(1);
        li.emplace_back(4);
        li.push_front(5);
        li.emplace_front(3);
        // rest all functions are same as vector
        // begin, end, rbegin,rend, clear, insert,size, swap
        for (auto i : li)
        {
                cout << i << " ";
        }
}