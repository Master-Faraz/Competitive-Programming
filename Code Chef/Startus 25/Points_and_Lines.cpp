#include <iostream>
using namespace std;
int main()
{
    long long int t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    return 0;
}