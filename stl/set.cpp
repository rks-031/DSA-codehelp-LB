#include <bits/stdc++.h>
using namespace std;

int main()
{
        // In a set, everything happens in logn time.
        set<int> st;
        // a set stores everything in sorted order and stores unique elements
        st.insert(1);  //{1}
        st.emplace(2); //{1,2}
        st.insert(2);  //{1,2} won't again add 2 in the set
        st.insert(4);  //{1,2,4}
        st.insert(3);  //{1,2,3,4}

        //{1,2,3,4,5}
        auto it = st.find(3); // returns an iterator which points to 3

        //{1,2,,3,4,5}
        auto it = st.find(6); // returns an iterator which points right after the last element:st.end()

        st.erase(5); // erases 5 : takes logarithmic time

        int cnt = st.count(1); // if 1 exits, it'll return 1 as set always has unqiue elements

        auto it = st.find(3);
        st.erase(it); // it takes constant time

        //{1,2,3,4,5}
        auto it1 = st.find(2);
        auto it2 = st.find(4);
        st.erase(it1, it2); //{1,4,5} [first,last)

        // lower and upper bound
        auto it = st.upper_bound();
        auto it = st.lower_bound();
}