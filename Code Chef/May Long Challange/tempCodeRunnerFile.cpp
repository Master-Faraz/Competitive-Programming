#include <iostream>
using namespace std;
int main()
{
    int n, x, y, t = 12;
    while (t--)
    {
        cout << "Enter number " << endl;
        cin >> n;
        x = ((n ^ (n + 1)));
        y = ((n + 2) ^ (n + 3));
        cout << x << "\t" << y << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     long long int t, n;
//     cin >> n;
//     while (t--)
//     {
//         cin>>n;
//         if()
//     }
//     return 0;
// }
