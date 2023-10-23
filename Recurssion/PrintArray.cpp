#include <bits/stdc++.h>
using namespace std;
void PrintArray(int A[], int n, int i)
{
  if (i == n)
    return;
  else
  {
    PrintArray(A, n, i + 1);
    cout << A[i] << "  ";
  }
}
void PrintReverse(int A[], int n, int i)
{
  i = n;
  if (i == -1)
    return;
  else
  {
    cout << A[i - 1] << ",";
    PrintReverse(A, n, i - 1);
  }
}
int main()
{
  int n;
  cin >> n;
  int A[n];
  for (int i = 0; i < n; i++)
    cin >> A[i];
  int i = 0;
  // PrintArray(A, n, i);
  PrintReverse(A, n, i);
}