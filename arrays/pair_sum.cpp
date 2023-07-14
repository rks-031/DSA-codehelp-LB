#include <iostream>
using namespace std;

// each pair should be sorted

pair<int, int> findPair(int a[], int n, int sum)
{
        for (int i = 0; i < n; i++)
        {
                for (int j = i + 1; j < n; j++)
                {
                        if ((a[i] + a[j] == sum) && a[i] < a[j])
                        {
                                return make_pair(a[i], a[j]);
                        }
                }
        }
        return make_pair(-1, -1);
}

int main()
{
        int n;
        int sum;
        cin >> n >> sum;
        int a[n];
        for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
        pair<int, int> ans = findPair(a, n, sum);
        if (ans.first == -1 && ans.second == -1)
        {
                cout << "Pair not found";
        }
        else
        {
                cout << ans.first << " " << ans.second << endl;
        }
}