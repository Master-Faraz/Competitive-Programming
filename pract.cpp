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
    return res;
}

long long int power(long long int x, long long int y)
{
    long long int res = 1;

    while (y)
    {
        if (y % 2 == 1)
            res = (res * x);

        y = y >> 1;

        x = (x * x);
    }
    return res;
}

// Driver code
int main()
{
    long long int x = 2;
    long long int y = 100;
    y=y-1;
    long long int p = 1000000007;
    cout<<temp<<endl;

    // cout << "Power is " << power(x, y, p) << endl;
    return 0;
}

// This code is contributed by shubhamsingh10
