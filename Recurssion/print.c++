#include <bits/stdc++.h>
using namespace std;
void printarray1(int arr[], int n, int index)
{
  if (index == n)
    return;
  else
  {
    cout << arr[index] << " ";
    printarray1(arr, n, index + 1);
  }
}
void reversearrayPrint(int arr[], int n, int index)
{
  if (index < 0)
    return;
  else
  {
    cout << arr[index] << " ";
    reversearrayPrint(arr, n, index - 1);
  }
}
void reversereturn(int arr[], int n, int index)
{
  if (index == n)
    return;
  else
  {
    reversereturn(arr, n, index + 1);
    cout << arr[index] << " ";
  }
}
void printSize(int arr[], int n)
{
  if (n == 0)
    return;
  else
  {
    cout << arr[0] << " ";
    printSize(arr + 1, n - 1);
  }
}
void ReversePrintSize(int arr[], int n, int size)
{
  if (size == 0)
    return;
  else
  {
    cout << arr[size - 1] << " ";
    ReversePrintSize(arr + 1, size - 1, n);
  }
}
// 2) Max Element In an array
int MaxiArray(int arr[], int index, int n)

{
  if (index == n)
    return INT_MIN;
  else
  {
    int ans = arr[index];
    int recResult = MaxiArray(arr, index + 1, n);
    int compare = max(ans, recResult);
    return compare;
  }
}
void findMax(int arr[], int n, int index, int &maxii)
{
  if (index == n)
    return;
  else
  {
    maxii = max(arr[index], maxii);
    findMax(arr, n, index + 1, maxii);
  }
}
int firstOccur(int arr[], int n, int index, int target)
{
  if (arr[index] == target)
    return index;
  else
  {
    firstOccur(arr, n, index + 1, target);
  }
}
int LastOccurance(int arr[], int n, int index, int target)
{
  if (arr[index] == target)
    return index;
  else
  {
    if (index < 0)
      return -1;
    LastOccurance(arr, n, index - 1, target);
  }
}
int main()
{
  int n;
  cout << "Enter size of array\n";
  cin >> n;
  int arr[n];
  cout << "Enter Array Elements" << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << endl;
  // printarray1(arr, n, 0);
  // reversearrayPrint(arr,n,n-1);
  // reversereturn(arr, n, 0);
  // printSize(arr, n);
  // ReversePrintSize(arr,n,5);
  // cout << MaxiArray(arr, 0, n);
  // int maxii = INT_MIN;
  // findMax(arr, n, 0, maxii);
  // cout << maxii << endl;
  // Call by value aur call by refrence bahut dhyan se use karna haii
  // call by value me copy banti hai
  cout << "Enter Target" << endl;
  int target;
  cin >> target;
  // cout << "Index of First Occuranve is " << firstOccur(arr, n, 0, target);
  // cout << "Index of Last Occuranve is " << firstOccur(arr, n, n - 1, target);
}