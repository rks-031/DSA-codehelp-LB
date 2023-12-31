#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string, int> m;

    pair<string, int> p1 = make_pair("mera", 1);
    m.insert(p1);

    pair<string, int> p2("naam", 2);

    m["mera"] = 3;

    m["mera"] = 2;

    // search
    cout << m["mera"] << endl;
    cout << m["babbar"] << endl; // creates a new entry if not present already
    cout << m.at("babbar") << endl;

    // size
    cout << m.size() << endl;

    // check presence
    cout << m.count("mera") << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    unordered_map<string, int>::iterator it = m.begin();

    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}