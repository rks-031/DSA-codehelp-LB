// Problem statement
//             A number is said to be K -
//         Pure if it is divisible by K only once.Formally X is K - Pure if X is divisible by K and
//     (X / K) is not divisible by K.

//     Given ‘N’
//     and ‘K’,
//     return the number of K - Pure Numbers from ‘1’ to ‘N’.

//                              Example : 'N' = 15 'K' = 3 There are 4 K - Pure Numbers 3,
//                                        6, 12 and 15.

int kPure(int n, int k)
{
    // Write your code here.
    int count = n / k;
    int res = count / k;
    return count - res;
}