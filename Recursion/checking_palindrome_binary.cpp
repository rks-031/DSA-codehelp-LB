#include <bits/stdc++.h>
using namespace std;

bool check(string str, int i, int j)
{
        if (i >= j)
        {
                return true;
        }
        if (str[i] != str[j])
        {
                return false;
        }
        else
        {
                return check(str, i + 1, j - 1);
        }
}

bool checkPalindrome(long long n)
{
        string binaryForm = bitset<sizeof(long long) * 8>(n).to_string();
        cout << binaryForm << endl;
        // Find the position of the first '1'
        size_t firstOnePos = binaryForm.find('1');

        if (firstOnePos != string::npos)
        {
                // Extract the substring from the first '1' onwards
                binaryForm = binaryForm.substr(firstOnePos);
        }
        else
        {
                // If no '1' found, set the binaryForm to "0"
                binaryForm = "0";
        }
        cout << binaryForm << endl;
        return check(binaryForm, 0, binaryForm.length() - 1);
}

int main()
{
        long long n;
        cin >> n;
        bool value = checkPalindrome(n);
        value ? cout << "Palindrome" : cout << "Not a palindrome";
        return 0;
}
