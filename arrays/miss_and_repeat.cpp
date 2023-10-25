vector<int> findTwoElement(vector<int> arr, int n)
{
        // code here
        vector<int> temp(n);
        int repeat = -1, miss = -1;

        for (int i = 0; i < n; i++)
        {
                temp[arr[i] - 1]++;
                if (temp[arr[i] - 1] > 1)
                        repeat = arr[i];
        }

        for (int i = 0; i < n; i++)
        {
                if (temp[i] == 0)
                {
                        miss = i + 1;
                        break;
                }
        }

        return {repeat, miss};
}