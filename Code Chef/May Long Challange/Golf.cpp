#include <iostream>
using namespace std;

int main()
{
    long long int t, n, x, k;
    cin >> t;

    while (t--)
    {
        cin >> n >> x >> k;

        if ((x % k) == 0)
            cout << "YES" << endl;
        else if ((((n + 1 - x) % k) == 0)) //.             Distance btw end and hole
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
