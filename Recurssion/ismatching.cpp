#include <bits/stdc++.h>
using namespace std;
int matchcnt(string s, string t, int i, int j)
{
if(i>=s.length() && j>=t.length()) return 0;
if(s[i]==t[j]){
return 1+matchcnt(s,t,i+1,j+1);
}
return matchcnt(s,t,i,j+1);
}
int main()
{
  string s;
  getline(cin, s);
  string t;
  getline(cin, t);
  cout << "Cnt of subsequence in s " << matchcnt(s, t, 0, 0);
}