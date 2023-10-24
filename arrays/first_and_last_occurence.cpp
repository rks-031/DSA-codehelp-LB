class Solution
{
private:
        int firstOccurence(int arr[], int n, int x)
        {

                int first = -1;
                int start = 0;
                int end = n - 1;

                while (start <= end)
                {
                        int mid = start + (end - start) / 2;
                        if (arr[mid] == x)
                        {
                                first = mid;
                                end = mid - 1;
                        }
                        else if (arr[mid] > x)
                        {
                                end = mid - 1;
                        }
                        else
                        {
                                start = mid + 1;
                        }
                }

                return first;
        }

        int lastOccurence(int arr[], int n, int x)
        {
                int last = -1;
                int start = 0;
                int end = n - 1;

                while (start <= end)
                {
                        int mid = start + (end - start) / 2;
                        if (arr[mid] == x)
                        {
                                last = mid;
                                start = mid + 1;
                        }
                        else if (arr[mid] > x)
                        {
                                end = mid - 1;
                        }
                        else
                        {
                                start = mid + 1;
                        }
                }

                return last;
        }

public:
        vector<int> find(int arr[], int n, int x)
        {
                // code here
                int first = firstOccurence(arr, n, x);
                int last = lastOccurence(arr, n, x);

                return {first, last};
        }
};