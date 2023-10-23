#include <bits/stdc++.h>
using namespace std;
void subsequence(int index, vector<int> &ds, vector<int> arr, int n)
{
  if (index >= n)
  {
    for (auto it : ds)
      cout << it << " ";
    cout << endl;
    return;
  }
  ds.push_back(arr[index]);
  subsequence(index + 1, ds, arr, n);
  ds.pop_back();
  subsequence(index + 1, ds, arr, n);
}
int main()
{
  cout << "ENTER NO ." << endl;
  int n;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter elements\n";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<int> ds;
  subsequence(0, ds, arr, n);
}