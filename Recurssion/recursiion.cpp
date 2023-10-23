#include <bits/stdc++.h>
using namespace std;
// void fun(int x)
// {
//   if (x > 10)
//     return;
//   else
//   {
//     cout << "Hello World !" << endl;
//     fun(x + 1);
//   }
// }
int fun(int x)
{
  if (x == 0)
    return 0;
  else
  {

    return fun(x - 1) + fun(x);
  }
}
int main()
{
  // int x = 10;
  int x = 5;
  cout << "Sum of Natural No. is " << fun(x);
}