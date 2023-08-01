#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<string>> allPermutations(string str)
{
        vector<vector<string>> output;
        sort(str.begin(), str.end());
        do
        {
                output.push_back({str}); // Convert each character to a separate string
        } while (next_permutation(str.begin(), str.end()));

        return output;
}

int main()
{
        string inputString;
        cout << "Enter a string: ";
        cin >> inputString;

        vector<vector<string>> permutations = allPermutations(inputString);

        cout << "All permutations of \"" << inputString << "\":" << endl;
        for (const auto &permutation : permutations)
        {
                cout << "{ ";
                for (const auto &ch : permutation)
                {
                        cout << ch << " ";
                }
                cout << "}" << endl;
        }

        return 0;
}
