class Solution
{
public:
    int ReturnToRoot(int N, vector<string> &M)
    {
        // code here
        string s = "";
        for (auto i : M)
        {
            if (i != "../" && i != "./")
            {
                s += i;
            }

            else if (i == "../" && s.size() > 1)
            {
                s.pop_back();
                s.pop_back();
            }
        }
        int cnt = 0;
        for (auto i : s)
        {
            if (i != '/')
                cnt++;
        }
        return cnt;
    }
};

// Return To Root
// This problem is inspired by recent Atlassian interview.
// A compliance crawler tool navigates a computer's file system from the root directory, logging each move operation:
// "../": Move to the parent folder.
// "./": Stay in the current folder.
// "x/": Move to the child folder named x. (in place of x there can be any english alphabet)
// Note: Move to child folder is of length one like "y/".
// You are given a series of moves M where M is an array of strings and length of M[] is N and the task is to find the minimum steps required for the crawler to return to the root directory after the series of moves.