#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int X_win = 0, O_win = 0, X_count = 0, O_count = 0, underscore_count = 0;
        char a[3][3];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'X')
                    X_count++;
                else if (a[i][j] == 'O')
                    O_count++;
                else
                    underscore_count++;
            }
        }

        //.                     *****       Checking winning condition      *****

        //.     Rows
        if (((a[0][0] == a[0][1]) and (a[0][1] == a[0][2]) and (a[0][1] == 'X')) || ((a[1][0] == a[1][1]) and (a[1][1] == a[1][2]) and (a[1][1] == 'X')) || ((a[2][0] == a[2][1]) and (a[2][1] == a[2][2]) and (a[2][1] == 'X'))) // .    X - Rows
        {
            X_win++;
        }

        if (((a[0][0] == a[0][1]) and (a[0][1] == a[0][2]) and (a[0][1] == 'O')) || ((a[1][0] == a[1][1]) and (a[1][1] == a[1][2]) and (a[1][1] == 'O')) || ((a[2][0] == a[2][1]) and (a[2][1] == a[2][2]) and (a[2][1] == 'O'))) //.              O - Rows
        {
            O_win++;
        }

        //.             Columns

        if (((a[0][0] == a[1][0]) and (a[1][0] == a[2][0]) and (a[0][0] == 'X')) || ((a[0][1] == a[1][1]) and (a[1][1] == a[2][1]) and (a[2][1] == 'X')) || ((a[0][2] == a[1][2]) and (a[1][2] == a[2][2]) and (a[2][2] == 'X'))) // .    X - column
        {
            X_win++;
        }

        if (((a[0][0] == a[1][0]) and (a[1][0] == a[2][0]) and (a[0][0] == 'O')) || ((a[0][1] == a[1][1]) and (a[1][1] == a[2][1]) and (a[2][1] == 'O')) || ((a[0][2] == a[1][2]) and (a[1][2] == a[2][2]) and (a[2][2] == 'O'))) //.              O - column
        {
            O_win++;
        }

        //.         Diagonal

        if (((a[0][0] == a[1][1]) and (a[1][1] == a[2][2])))
        {
            if (a[0][0] == 'X')
                X_win++;
            else
                O_win++;
        }
        else if (((a[0][2] == a[1][1]) and (a[1][1] == a[2][0])))
        {
            if (a[1][1] == 'X')
                X_win++;
            else
                O_win++;
        }

        // //.                 ***** checking and printing *****

        if (O_count > X_count) //.                 number of  O > X
            cout << 3 << endl;
        else if ((X_count == 1 and O_count == 0) and (underscore_count = 8))
            cout << 2 << endl;
        else if ((X_count == 0 and O_count == 1) and (underscore_count = 8))
            cout << 2 << endl;

        else if ((X_count == 0 and O_count == 0) and (underscore_count = 9))
            cout << 2 << endl;

        else if ((X_count - O_count) > 1) //.         more X than O
            cout << 3 << endl;

        else if (((X_count > O_count) and ((X_win == 1) and (O_win == 0)))) //.   last value put by X and it wins
            cout << 1 << endl;

        else if ((X_count == O_count) and ((X_win == 0) and (O_win == 1))) //.  last Value put by O and it wins
            cout << 1 << endl;

        else if (((X_win + O_win) == 0) and (underscore_count == 0)) //.     Draw Condition
            cout << 1 << endl;

        else if ((((X_win == 2) and (underscore_count == 0)))) //.     Special case in which X wins by rows and digonal full
            cout << 1 << endl;

        else if ((underscore_count > 0) and ((X_win + O_win == 0))) //.     when game is not finished
            cout << 2 << endl;

        else
            cout << 3 << endl;
    }

    return 0;
}

// cout << "\n\n X Count : " << X_count << " O count : " << O_count << " UnderScore count : " << underscore_count << endl;
// cout << X_win << "\t" << O_win << endl;

// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)

//     {
//         cout<< a[i][j]<<"\t";
//     }
//     cout<<endl;
// }
// cout<<"\nX count = "<<X_count<<" O count = "<<O_count<<" Underscore "<<underscore_count<<endl;

/*

                                TEST CASES
1
X O X
X O X
0 X X

1
X O X
X O X
O O O  

1
X O X
X O X
X O O  

1
X X O
X O X
X O O

1
O O X
O X O
O X X

O X X 
O _ X
O _ _

1
X O O
X _ _
X _ _

XOX
XXO
OXO

*/