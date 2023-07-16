#include <bits/stdc++.h>
using namespace std;

int main()
{
        multiset<int> ms;
        // like set it also stores element in sorted order but can stire duplicate elements too unlike set
        ms.insert(1);
        ms.insert(1);
        ms.insert(1); //{1,1,1}

        ms.erase(1); // all 1's earsed

        int cnt = ms.count(1);
        cout << cnt << endl;

        // only a single 1 is erased
        // ms.erase(ms.find(1));

        ms.erase(ms.find(1), ms.find(1) + 2);
        for (auto i : ms)
        {
                cout << i << " ";
        }

        // rest all functions same as sets
}