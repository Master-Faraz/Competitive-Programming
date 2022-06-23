// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n = 0, m = 0, x = 1, y = 1, a = 1, b = 2, count = 0;
//         cin >> n >> m;

//         for (a = 1; a <= n - 1; a++)
//         {
//             for (b = a + 1; b <= n; b++)
//             {
//                 x = ((m % a) % b);
//                 y = ((m % b) % a);
//                 if ((a != b) && (x == y))
//                 {
//                     // cout << a << "\t" << b << "\t" << x << "\t" << y << endl;
//                     count++;
//                 }
//             }
//         }
//         cout << count << endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n = 0, m = 0, count = 0;
        cin >> n >> m;
        vector<long long int> v(n + 1, 1);
        for (long int i = 2; i <= n; i++)
        {
            long long int a = (m % i);
            count += v[a];
            for(long int j=a;j<=n;j+=i)
            {
                v[j]++;
            }
        }
        cout << count << endl;
    }
    return 0;
}