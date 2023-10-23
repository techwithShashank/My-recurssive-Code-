#include <bits/stdc++.h>
using namespace std;
int PrintArr(int arr[], int index, int n)
{
  int maxi = INT_MIN;
  if (index == n)
    return maxi;
  else
  {
    maxi = max(maxi, arr[index]);
    return PrintArr(arr, index + 1, n);
  }
}
int main()
{
  int n;
  cin >> n;
  int index = 0;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << endl;
  cout << PrintArr(arr, 0, n);
}