#include <bits/stdc++.h>
using namespace std;
// sieve of eratosthenes

int countPrimes(int n)
{
        int count = 0;
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;

        for (int i = 2; i < n; i++)
        {
                if (prime[i])
                {
                        count++;

                        // us number k table me jitne bhi number aa rhe hain unko false(non-prime) mark krdo
                        for (int j = 2 * i; j < n; j = j + i)
                        {
                                prime[j] = false;
                        }
                }
        }
        return count;
}

int main()
{
        int n;
        cin >> n;
        int numberOfPrimes = countPrimes(n);
        cout << numberOfPrimes << endl;
}