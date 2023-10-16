class Solution
{
public:
        // Function to return the count of number of elements in union of two arrays.
        int doUnion(int a[], int n, int b[], int m)
        {
                // code here
                unordered_map<int, int> freq;

                // pehle k elements map me daalo
                for (int i = 0; i < n; i++)
                {
                        freq[a[i]++];
                }

                // then b k elements map me daalo
                for (int i = 0; i < m; i++)
                {
                        if (freq[b[i]] == 0)
                        {
                                // to check if the element is already present in the map
                                freq[b[i]++];
                        }
                }

                return freq.size();
        }
};