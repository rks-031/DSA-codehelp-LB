#include <bits/stdc++.h>
using namespace std;

int main()
{
        // int a[5] = {1, 3, 5, 2, 4};
        // sort(a, a + 5);
        // for a vector: sort(v.begin(),v.end());
        // for (int i = 0; i < 5; i++)
        // {
        //         cout << a[i] << " ";
        // }
        // cout << endl;
        int a1[4] = {1, 3, 5, 2};
        // suppose I want to sort only 5 and 2
        sort(a1 + 2, a1 + 4);
        for (int i = 0; i < 4; i++)
        {
                cout << a1[i] << " ";
        }
        cout << endl;

        // sorting in descending order
        // sort(a, a + 5, greater<int>()); // greater<int>() is an in-built comparator
        // for (int i = 0; i < 5; i++)
        // {
        //         cout << a[i] << " ";
        // }

        pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
        // sort it according to the second element
        // if second element is same, then sort
        // it according to the first element but in descending order

        // answer: 1. {{2,1},{4,1},{1,2}} 2. {{4,1},{2,1},{1,2}}

        bool comp(pair<int, int> p1, pair<int, int> p2)
        {
                if (p1.second > p2.second)
                        return false;
                if (p1.second < p2.second)
                        return true;
                // if they are same
                if (p1.first > p2.first)
                        return true;
        }

        sort(a, a + 3, comp);
        for (auto i : a)
        {
                cout << i.first << " " << i.second << " " << endl;
        }
}