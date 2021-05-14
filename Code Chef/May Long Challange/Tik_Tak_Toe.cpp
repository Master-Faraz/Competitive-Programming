#include <iostream>
using namespace std;

int check(char a[3][3])
{

    int x = 0, o = 0;

    if ((a[0][1] == a[0][2] == a[0][3] == (('X' || 'x'))) || (a[1][1] == a[1][2] == a[1][3] == (('X' || 'x'))) || (a[2][1] == a[2][2] == a[2][3] == (('X' || 'x'))))
    {
        x += 1;
    }
    if ((a[0][1] == a[0][2] == a[0][3] == (('O' || 'o'))) || (a[1][1] == a[1][2] == a[1][3] == (('O' || 'o'))) || (a[2][1] == a[2][2] == a[2][3] == (('O' || 'o'))))
    {
        o += 1;
    }

    if ((a[0][1] == a[1][1] == a[2][1] == (('X' || 'x'))) || (a[0][2] == a[1][2] == a[2][2] == (('X' || 'x'))) || (a[0][3] == a[1][3] == a[2][3] == (('X' || 'x'))))
    {
        x += 1;
    }

    if ((a[0][1] == a[1][1] == a[2][1] == (('O' || 'o'))) || (a[0][2] == a[1][2] == a[2][2] == (('O' || 'o'))) || (a[0][3] == a[1][3] == a[2][3] == (('O' || 'o'))))
    {
        o += 1;
    }

    if ((a[0][1] == a[1][2] == a[2][3] == (('X' || 'x'))) || (a[0][3] == a[1][2] == a[2][1] == (('X' || 'x'))))
    {
        x += 1;
    }

    if ((a[0][1] == a[1][2] == a[2][3] == (('O' || 'o'))) || (a[0][3] == a[1][2] == a[2][1] == (('O' || 'o'))))
    {
        o += 1;
    }

    if (((x > 0) && (o == 0)) || ((x = 0) && (o > 0)))
        return 1;
    else if (((x > 0) && (o > 0)))
        return 3;
    else
        return 2;
}

int fill_X(char a[3][3])
{
    char temp[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == '_')
                temp[i][j] = 'X';
            else
                temp[i][j] = a[i][j];
        }
    }

    if (check(temp) == 1)
        return 1;
    else if (check(temp) == 2)
        return 2;
    else if (check(temp) == 3)
        return 3;
}

int fill_O(char a[3][3])
{
    char temp[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == '_')
                temp[i][j] = 'O';
            else
                temp[i][j] = a[i][j];
        }
    }

    if (check(temp) == 1)
        return 1;
    else if (check(temp) == 2)
        return 2;
    else if (check(temp) == 3)
        return 3;
}

int check_(char a[3][3])
{
    int nox = 0, noy = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 'X')
                nox += 1;
            else if (a[i][j] == 'O')
                noy += 1;
        }
    }
}
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        char a[3][3];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    return 0;
}

// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         cout<<a[i][j]<<"\t";
//     }
//     cout<<endl;
// }

// if (a[i][j] == '_')
// {
//     if (fill_X(a) == 1)
//         return 1;

//     else if (fill_X(a) == 2)
//         return 2;

//     else
//     {
//         if (fill_O(a) == 1)
//             return 1;

//         else if (fill_O(a) == 2)
//             return 2;

//         else if (fill_O(a) == 3)
//             return 3;

//     }