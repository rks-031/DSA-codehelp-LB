#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2)
{
        if (s1.length() > s2.length())
                return false;

        unordered_map<char, int> freq;
        for (char ch : s1)
        {
                freq[ch]++;
        }

        int left = 0;
        int right = 0;
        int count = s1.length();

        while (right < s2.length())
        {
                if (freq[s2[right]] > 0)
                {
                        count--;
                }
                freq[s2[right]]--;
                right++;

                if (count == 0)
                        return true;

                if (right - left == s1.length())
                {
                        if (freq[s2[left]] >= 0)
                        {
                                count++;
                        }
                        freq[s2[left]]++;
                        left++;
                }
        }
        return false;
}

int main()
{
        string s1;
        string s2;
        getline(cin, s1);
        getline(cin, s2);
        bool value = checkInclusion(s1, s2);
        value == 1 ? cout << "true" : cout << "false";
        return 0;
}