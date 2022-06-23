#include <iostream>
using namespace std;
int main()
{
    int t, x, a, b, res;
    cin >> t;

    while (t--)
    {
        cin >> x >> a >> b;
        res = ((a + (100 - x) * b) * 10);
        cout<<res<<endl;
    }

    return 0;
}



