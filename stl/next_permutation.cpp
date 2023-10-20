#include <bits/stdc++.h>
using namespace std;

int main()
{
        string str = "123";

        // do
        // {
        //         cout << str << endl;
        // } while (next_permutation(str.begin(), str.end()));

        // we should always start with the sorted string if we want to print all the permutations
        // if we are starting frm suppose "231";
        // string s = "231";
        // do
        // {
        //         cout << s << endl;
        // } while (next_permutation(s.begin(), s.end()));
        // we ony have three answers

        // so either start frm the sorted string or sort the string first and then print the permutations
        string s1 = "231";
        // sort(s1.begin(), s1.end());
        do
        {
                cout << s1 << endl;
        } while (next_permutation(s1.begin(), s1.end()));
}