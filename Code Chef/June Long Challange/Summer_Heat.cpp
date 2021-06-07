#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, x, y, count = 0;
        cin >> a >> b >> x >> y;

        count += (x / a);
        count += (y / b);
        cout << count << endl;
    }

    return 0;
}