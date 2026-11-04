// Codeforces: https://codeforces.com/contest/112/A
// Problem: Petya and Strings
// Submission: https://codeforces.com/contest/112/submission/397278995
// Language: C++20 (GCC 13-64)
// Submitted: 2026-11-03T22:35:06.000Z
// Rating: 800
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
using ll = long long;

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << endl
#else
#define dbg(x)
#endif

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string a, b;
  cin >> a >> b;

  int len = a.size();

  for(int i = 0; i < len; i++){
      if(tolower(a[i]) < tolower(b[i])){
          cout << -1 << "\n";
          return 0;
      }
      else if(tolower(a[i]) > tolower(b[i])){
          cout << 1 << "\n";
          return 0;
      }
  }
  cout << 0 << "\n";
  return 0;
}
