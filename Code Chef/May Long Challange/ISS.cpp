#include <iostream>
#include <vector>
using namespace std;

// long long int gcd(long long int a, long long int b);
long long int power(long long int x, long long int y);
long long int gcd(long long int a, long long int b)
{
    while (b)
        b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int k, seq, sum = 0;

        cin >> k;

        vector<long long int> v[1];

        for (int i = 1; i <= (2 * k + 1); i++)
        {

            seq = (k + power(i, 2));
            v->push_back(seq);
        }

        vector<long long int>::iterator it1;

        for (auto itr = v->begin(); itr != v->end(); itr++)
        {
            itr++;
            it1 = itr;
            itr--;
            if (*it1 != 0)
                sum += gcd(*itr, *it1);
            // cout<<*itr<<endl;
            // cout<<*itr<<"\t"<<*it1<<endl;
        }

        cout << sum << endl;
    }

    return 0;
}

//.                                   ****************************

// for (auto itr = v->begin(); itr != v->end(); itr++)
//     cout << *itr << endl;

//.                                   ****************************

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