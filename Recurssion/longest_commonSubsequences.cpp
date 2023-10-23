#include <bits/stdc++.h>
using namespace std;
int LongestCommonSubstring(string text1, string text2, int i, int j)
{
  if (i >= text1.length())
    return 0;
  if (j >= text2.length())
    return 0;
  int Cnt_Common_Char = 0;
  if (text1[i] == text2[j])
  {
    Cnt_Common_Char = 1 + LongestCommonSubstring(text1, text2, i + 1, j + 1);
  }
  // max of compare of two string
  else{
  Cnt_Common_Char = max(LongestCommonSubstring(text1, text2, i + 1, j), LongestCommonSubstring(text1, text2, i, j + 1));
  }
  return Cnt_Common_Char;
}
int main()
{
  string text1 = "abcde";
  string text2 = "ace";
  int i = 0;
  int j = 0;
  cout << "Common susbsequence max is " << LongestCommonSubstring(text1, text2, i, j);
}