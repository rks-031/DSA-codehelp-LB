int maximumFrequency(vector<int> &arr, int n)
{
    // Write your code here
    unordered_map<int, int> freq;

    int maxFreq = 0;
    int maxAns = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
        maxFreq = max(maxFreq, freq[arr[i]]);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (maxFreq == freq[arr[i]])
        {
            maxAns = arr[i];
            break;
        }
    }

    return maxAns;
}