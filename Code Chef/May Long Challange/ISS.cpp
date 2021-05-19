#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{

  
  cin.tie(0);
  int N = 4e6 + 5;
  int phi[N], ans[N];
  for (int i = 0; i < N; i++)
  {
    phi[i] = i;
    ans[i] = 0;
  }
  for (int p = 2; p < N; p++)
  {
    if (phi[p] == p)
    {
      phi[p] = p - 1;
      for (int i = 2 * p; i < N; i += p)
      {
        phi[i] = (phi[i] / p) * (p - 1);
      }
    }
  }
  for (int i = 1; i < N; i++)
  {
    ans[i] += i - 1;
    for (int j = 2 * i; j < N; j += i)
    {
      ans[j] += i * ((1 + phi[j / i]) / 2);
    }
  }
  int t;
  cin >> t;
  while (t--)
  {
    int k;
    cin >> k;
    cout << ans[4 * k + 1] << endl;
  }
  return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// // long long int gcd(long long int a, long long int b);
// long long int power(long long int x, long long int y);
// long long int gcd(long long int a, long long int b)
// {
//     while (b)
//         b ^= a ^= b ^= a %= b;
//     return a;
// }

// int main()
// {
//     long long int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int k, seq, sum = 0;

//         cin >> k;

//         vector<long long int> v[1];

//         for (int i = 1; i <= (2 * k + 1); i++)
//         {

//             seq = (k + power(i, 2));
//             v->push_back(seq);
//         }

//         vector<long long int>::iterator it1;

//         for (auto itr = v->begin(); itr != v->end(); itr++)
//         {
//             itr++;
//             it1 = itr;
//             itr--;
//             if (*it1 != 0)
//                 sum += gcd(*itr, *it1);
//             // cout<<*itr<<endl;
//             // cout<<*itr<<"\t"<<*it1<<endl;
//         }

//         cout << sum << endl;
//     }

//     return 0;
// }

// //.                                   ****************************

// // for (auto itr = v->begin(); itr != v->end(); itr++)
// //     cout << *itr << endl;

// //.                                   ****************************

// long long int power(long long int x, long long int y)
// {
//     long long int res = 1;

//     while (y)
//     {
//         if (y % 2 == 1)
//             res = (res * x);

//         y = y >> 1;

//         x = (x * x);
//     }
//     return res;
// }