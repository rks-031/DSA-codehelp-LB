class Solution
{
public:
    // Function to reverse words in a given string.
    string reverseWords(string S)
    {
        // code here
        string str = "";
        for (int i = S.length() - 1; i >= 0; i--)
        {
            string s1 = "";
            while (i >= 0 && S[i] != '.')
            {
                s1.push_back(S[i]);
                i--;
            }
            // Reverse the word before adding it to str
            reverse(s1.begin(), s1.end());
            str += s1;

            if (i != -1)
                str.push_back('.');
        }
        return str;
    }
};