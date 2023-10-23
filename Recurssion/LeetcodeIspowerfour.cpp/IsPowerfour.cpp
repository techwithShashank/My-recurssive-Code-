#include <iostream>
using namespace std;
int PowFour(int m, int n)
{
  if (n == 0)
    return 1;
  else
    return m * PowFour(m, n - 1);
}
bool isPowerOfFour(int m, int n, int ans)
{
  if (ans == PowFour(m, n))
    return true;
  else
    return false;
}
int main()
{
  int m = 4;
  int n;
  cout << ""

      int ans;
  cout << "Enter Check Value " << endl;
  cin >> ans;
  cout << isPowerOfFour(m, n, ans);
}