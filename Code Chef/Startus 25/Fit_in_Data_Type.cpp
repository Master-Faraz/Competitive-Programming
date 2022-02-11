#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, res;
        cin >> n >> x;
        res = ((x % n));

        if (x <= n)
            cout << res << endl;
        else
        {
            cout << res - 1 << endl;
        }
    }
    return 0;
}