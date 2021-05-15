#include <iostream>
using namespace std;

int main()
{
    long long int n, m, x = 1, y = 1, a = 1, b = 3;
    cin >> n >> m;

    x = ((m % a) % b);
    y = ((m % b) % a);

    // for (int i; i < n - 1; i++)
    // {
    //     cout << a << "\t" << b << "\t" <<x << "\t" << y << endl;
    //     a = b;
    //     b = b + 1;
    // }
    cout<<x<<"\t"<<y<<endl;

    return 0;
}