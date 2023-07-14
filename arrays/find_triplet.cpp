#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
                for (int j = i + 1; j < n; j++)
                {
                        for (int k = j + 1; k < n; k++)
                        {
                                if (arr[i] + arr[j] + arr[k] == K)
                                {
                                        vector<int> temp;
                                        temp.push_back(arr[i]);
                                        temp.push_back(arr[j]);
                                        temp.push_back(arr[k]);
                                        ans.push_back(temp);
                                }
                        }
                }
        }
        return ans;
}

int main()
{
        int n;
        cin >> n;
        int K;
        cin >> K;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
                cin >> arr[i];
        }

        vector<vector<int>> triplets = findTriplets(arr, n, K);

        for (const auto &triplet : triplets)
        {
                for (const auto &num : triplet)
                {
                        cout << num << " ";
                }
                cout << endl;
        }

        return 0;
}
