// Codeforces: https://codeforces.com/contest/282/A
// Problem: Bit++
// Submission: https://codeforces.com/contest/282/submission/397057175
// Language: C++20 (GCC 13-64)
// Submitted: 2026-11-01T20:40:39.000Z
// Rating: 800
#include <bits/stdc++.h>
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

  int t;
  cin >> t;
  int x = 0;
  string s;
  while(t--){
      cin >> s;
      if(s.find('+') != string::npos) x++;
      else x--;
  }
  cout << x << "\n";
  return 0;
}
