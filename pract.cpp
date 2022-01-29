#include <iostream>
using namespace std;
int main()
{
  int t;

  cin >> t;

  while (t--)
  {
    long long int n, h, largest = 0, second_Largest = 0;

    cin >> n;
    cin >> h;

    int arr[n];

    for (int i = 0; i < n; i++) //.      array input
    {
      cin >> arr[i];

      // .       finding largest and second largest element during input
      if (arr[i] > largest)
      {
        second_Largest = largest;
        largest = arr[i];
      }
      else
      {
        if (arr[i] > second_Largest)
          second_Largest = arr[i];
      }
    }

    if (largest >= h) //.     If largest element >= health
      cout << 1 << endl;
    else if (largest + second_Largest >= h) //.         If sum of largest and second largest >= health
      cout << 2 << endl;
    else
    {
      int val = (h / (largest + second_Largest)) * 2 + 1;
      cout << val << endl;
    }
  }
  return 0;
}

// else
// {
//   long long int count = 2, sum = largest + second_Largest;
//   int flip_flop = 0;

//   while (sum < h)
//   {
//     if (flip_flop == 0)
//     {
//       sum += largest;
//       flip_flop++;
//       count++;
//     }
//     else
//     {
//       sum += second_Largest;
//       flip_flop--;
//       count++;
//     }
//   }
//   cout << count << endl;
// }