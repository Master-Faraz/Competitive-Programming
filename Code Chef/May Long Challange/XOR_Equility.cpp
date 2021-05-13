#include <iostream>
using namespace std;

long long int temp=0;

/* Iterative Function to calculate (x^y)%p in O(log y) */
long long int power(long long x, unsigned int y, int p)
{
  long long int res = 1;

  x = x % p;

  if (x == 0)
    return 0;

  while (y > 0)
  {
    if (y & 1)
      res = (res * x) % p;

    y = y >> 1;
    x = (x * x) % p;
  }
  temp=res;
  return res;
}


int main()
{
  long long int t, n, z = 100000007, res;

  // cout<<z<<endl;
  cin >> t;
  while (t--)
  {

    cin >> n;
    power(2, (n - 1), z);
    cout<<temp<<endl;
  }
  return 0;
}
