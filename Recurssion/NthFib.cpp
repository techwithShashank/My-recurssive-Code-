#include <bits/stdc++.h>
using namespace std;
int Nthfib(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  else
  {
    return Nthfib(n - 1) + Nthfib(n - 2);
  }
}
int main()
{
  int n;
  cout << "Enter Nth Number To find Fibconcci Sum:> " << endl;
  cin >> n;
  cout << "Sum of Fib is " << Nthfib(n);
}