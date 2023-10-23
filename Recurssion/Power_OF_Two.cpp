#include <iostream>
using namespace std;
int Pow(int m, int n)
{
  if (n == 0)
    return 1;
  else if (n % 2 == 0)
    return Pow(m * m, n / 2);
  else
    return m * Pow(m * m, (n - 1) / 2);
}
int main()
{
  int m;
  cout << "Enter The No." << endl;
  cin >> m;
  int n;
  cout << "Enter The Power." << endl;
  cin >> n;
  cout << "The Power Is :" << Pow(m, n);
}