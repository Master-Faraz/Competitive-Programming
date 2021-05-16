#include <iostream>
#include <vector>
using namespace std;

long long int gcd(long long int a, long long int b);
long long int power(long long int x, long long int y);



int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int k;
        cin >> k;
        for (int i = 1; i < (2 * k + 1); i++)
        {
           vector<long long int> v[k];
                      

        }
    }
    return 0;
}

long long int gcd(long long int a, long long int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
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