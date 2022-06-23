#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, res = 0;
        cin >> x >> y;

        res = x / 2;

        if (y>=res)
            cout << res << endl;
        else
        {
            cout << y << endl;
        }
    }

    return 0;
}