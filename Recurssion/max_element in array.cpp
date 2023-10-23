#include <bits/stdc++.h>
using namespace std;
int mx = INT_MIN;
int max_elements(int n, int A[])
{
  if (n == 1)
    return A[0];
  return max(A[n - 1], max_elements(A, n - 1));
}
int main()
{
  int n;
  cin >> n;
  int A[n] = {0};
  for (int i = 0; i < n; i++)
    cin >> A[i];
}