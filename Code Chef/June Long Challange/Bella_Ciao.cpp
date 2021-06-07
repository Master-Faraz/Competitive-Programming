#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    // t=1;

    while (t--)
    {
        long long int D, d, p, q, total = 0;

        cin >> D >> d >> p >> q;

        int n = D / d;

        total = ((D * p) + (d * (q * (((n - 1) * n) / 2))));

        if((D%d)!=0)
        {
            int rem=(D%d);

            total+=(rem*(n*q));
        }

        cout << total << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     long long int t;
//     cin >> t;
//     // t=1;

//     while (t--)
//     {
//         long long int D, d, p, q, total = 0, count = 0;

//         cin>>D>>d>>p>>q;
//         // D=2,d=1,p=1,q=1;

//         for (int i = 1; i <= D; i++)
//         {
//             if ((i % d) == 0)
//             {
//                 total += (p + (count * q));
//                 count++;
//             }
//             else
//             {
//                 total += (p + (count * q));
//             }
//         }
//         cout << total << endl;
//     }

//     return 0;
// }