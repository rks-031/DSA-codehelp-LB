// Ninja has a string 'S' of the length 'N'.He wants to expand it and make its length atleast 'M'.He can do the following operation at a time :

//     Choose any character 'X' present in the string,
//     copy all of the characters 'X' from the string, and paste them at the end of the string 'S'.

//                                                         Your task is to to return the minimum number of operations required to expand the length of string 'S' to at least 'M'.

//                                                         Example : 'N' = 4 'S' = "abcc" 'M' = 7

//                                                                                              The best way to make the length of the string atleast '7'(M)is : Choose the character 'a' : "abcc" → "abcca"

//                                                                                                                                                                                          Choose the character 'c' : "abcca" → "abccacc"

//                                                                                                                                                                                                                     The Ninja needs two operations to expand the string to length '7'.So,
//                                                                   the answer is '2'.

int findMinimumOperations(int n, long long m, string s)
{
    // Write your code here.
    int freq[26] = {0};
    int maxi = 0;
    // int totalChars  = 0;

    for (char c : s)
    {
        freq[c - 'a']++;
        maxi = max(maxi, freq[c - 'a']);
    }

    // for(int i=0;i<26;i++){
    //     totalChars+=freq[i];
    // }

    int cnt = 0;

    while (n < m)
    {
        n += maxi;
        maxi *= 2;
        cnt++;
    }

    return cnt;
}