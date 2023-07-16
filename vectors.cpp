#include <bits/stdc++.h>
using namespace std;

int main()
{
        // vector<int> v;
        // v.push_back(1);
        // v.emplace_back(2);
        // for (auto i : v)
        // {
        //         cout << i << " ";
        // }
        // cout << endl;

        // vector<pair<int, int>> vec;
        // vec.push_back({1, 3});
        // vec.emplace_back(1, 2);
        // for (auto i : vec)
        // {
        //         cout << "(" << i.first << " " << i.second << ")";
        // }
        // cout << endl;

        // vector<int> v1(5, 100) // size:5 and containing same element 100 5 times

        //     vector<int>
        //         v2(5); // size: 5

        // vector<int> v3(v1); // copies vector v1 to v3

        // Accessing vectors through iterators
        vector<int> striver(5);
        for (auto &i : striver)
        {
                cin >> i;
        }
        // vector<int>::iterator it = striver.begin(); // points to the first element of the vector
        // it++;                                       // pointer moves to the next element
        // cout << *(it) << endl;
        // it += 2;
        // cout << *it << endl;

        // vector<int>::iterator it = striver.end(); // points to a memory location just after the last element
        // striver.back();                           // last index of the vector
        // printing the vector
        for (auto &it : striver)
        {
                cout << it << " ";
        }
        cout << endl;
        // or
        for (auto it = striver.begin(); it != striver.end(); it++)
        {
                cout << *it << " ";
        }
        cout << endl;
        // or simply,
        for (int i = 0; i < striver.size(); i++)
        {
                cout << striver[i] << " ";
        }
        cout << endl;

        // erase
        v.erase(v.begin() + 1);
        v.erase(v.begin() + 1, v.begin() + 4) //[start,end)

            // insert
            vector<int>
                v(2, 100);              //{100,100}
        v.insert(v, begin(), 300);      //{300,100,100}
        v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100}

        // copy
        vector<int> copy(2, 50);                      //{50,50}
        v.insert(v.begin(), copy.begin(), copy.end()) //{50,50,300,10,10,100,100}

            // size of the vector
            //{10,20}
            cout
            << v.size(); // 2

        //{10,20}
        v.pop_back(); //{10}

        // v1->{10,20}
        // v2->{30,40}
        v1.swap(v2); // v1->{30,40}and v2->{10,20}

        v.clear(); // erases the entire vector

        cout << v.empty(); // returns true or false depending on the vector is empty or not?
}