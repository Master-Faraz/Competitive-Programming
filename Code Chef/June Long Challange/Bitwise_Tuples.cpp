#include <iostream>
using namespace std;

long long int power(long long x, long long int y, int p)
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

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int N, M, res;
        cin >> N >> M;

        // a = (power(2, N) - 1);

        res = (power((power(2, N, 1000000007) - 1), M, 1000000007));
        cout << res << endl;
    }

    return 0;
}