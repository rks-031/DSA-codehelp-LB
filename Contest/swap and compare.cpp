// You are given two strings, 'S' and 'T' of 'N' lowercase English characters.

// In one operation, you can select some 'i' (1 <= 'i' <= 'N - 1') and swap 'S[i]' with 'S[0]' and 'T[i]' with 'T[0]'. Note that we are using 0-based indexing.

// You want to make string 'S' lexicographically smaller than 'T' by performing the mentioned operations any number of times. Return '1' if it is possible. Otherwise, return '0'.

// Example:
// N = 3
// S = 'cab'
// T = 'abc'
// In the first operation, you can select 'i' equal to '1'. So 'S' and 'T' will become 'acb' and 'bac', respectively after performing the operation.
// We can see that 'S' is lexicographically smaller than 'T'.
// So the answer for this case is '1'.

#include <bits/stdc++.h>

int makeStringSmaller(int n, string &s, string &t)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        swap(s[i], s[0]);
        swap(t[i], t[0]);

        if (s[0] < t[0])
            return 1;
    }
    return 0;
}