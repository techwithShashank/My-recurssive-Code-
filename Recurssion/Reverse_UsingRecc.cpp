#include <bits/stdc++.h>
using namespace std;
void PrintReverse(int A[], int n, int i)
{
  if (i == n)
    return;
  else
  {
    PrintReverse(A, n, i + 1);
    cout << A[i] << " ";
  }
}
int main()
{
  int n = 5;
  int A[n] = {1, 2, 3, 4, 5};
  int i = 0;
  PrintReverse(A, n, i);
  return 0;
}