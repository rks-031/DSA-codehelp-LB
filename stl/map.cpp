#include <bits/stdc++.h>
using namespace std;

int main()
{
        // map has a key and value pair
        // map stores unique keys in sorted order
        // different types of definition
        map<int, int> mp;
        map<int, pair<int, int>> mp;
        map<pair<int, int>, <int>> mp;

        mp[1] = 2;          // key-1 value-2
        mp.emplace({3, 1}); // key-3 value-1
        mp.insert({2, 4});  // key-2 value-4
        //{{1,2}, {2,4},{3,1}}
        map[{2, 3}] = 10; // key-{2,3} value-10

        // printing
        for (auto it : mp)
        {
                cout << it.first << " " << it.second << endl;
        }

        cout << mp[1]; // 2
        cout << mp[5]; // 0 or null

        // access
        auto it = mp.find(3); // gives iterator to {3,1}
        cout << *(it).second; // prints 1

        auto it = mp.find(5);

        auto it = mp.upper_bound();
        auto it = mp.lower_bound();
}