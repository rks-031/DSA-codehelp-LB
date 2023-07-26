#include <bits/stdc++.h>
using namespace std;

void sayDigit(vector<string> arr, int n)
{
        if (n == 0)
        {
                return;
        }

        int digit = n % 10;
        n /= 10;
        // rr
        sayDigit(arr, n);
        // processing
        cout << arr[digit] << " ";
}

int main()
{
        vector<string> arr = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

        int n;
        cin >> n;

        sayDigit(arr, n);
}