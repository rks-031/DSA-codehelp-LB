#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> subarrays(int arr[], int n)
{
        int start = 0, end = 0;

        vector<vector<int>> subArrays;

        while (start < n)
        {
                while (end < n)
                {
                        vector<int> ans;
                        for (int i = start; i <= end; i++)
                        {
                                ans.push_back(arr[i]);
                        }
                        subArrays.push_back(ans);
                        end++;
                }

                start++;
                end = start;
        }

        return subArrays;
}

int main()
{
        int arr[] = {1, 2, 3, 4};
        int n = sizeof(arr) / sizeof(arr[0]);

        vector<vector<int>> result = subarrays(arr, n);

        for (auto i : result)
        {
                for (auto j : i)
                {
                        cout << j << " ";
                }
                cout << endl;
        }

        return 0;
}
