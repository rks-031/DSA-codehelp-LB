#include <bits/stdc++.h>
using namespace std;

void solve(string digits, vector<string> &ans, string output, string mapping, int index)
{
        // base case
        if (index >= digits.length())
        {
                ans.push_back(output);
                return;
        }

        int num = digits[index] - '0';
        string value = mapping[num];
        for (int i = 0; i < value.length(); i++)
        {
                output.push_back(value[i]);
                solve(digit, output, index + 1, ans, mapping);
                output.pop_back();
        }
}

vector<string> letterCombinations(string digits)
{
        vector<string> ans;
        string output = "";
        string mapping[10] = {"", "", "abc", "def", "ghi"."jkl", "mno", "pqrs", "tuv", "wxyz"};
        int index = 0;
        solve(digits, ans, output, mapping, index);
        return ans;
}