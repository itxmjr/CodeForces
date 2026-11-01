// Codeforces: https://codeforces.com/contest/231/A
// Problem: Team
// Submission: https://codeforces.com/contest/231/submission/397056261
// Language: C++20 (GCC 13-64)
// Submitted: 2026-11-01T20:23:36.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << endl
#else
#define dbg(x)
#endif

int solve(){
   int a, b, c;
   cin >> a >> b >> c;
   if(a+b+c >= 2) return 1;
   return 0;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  int res = 0;
  while(t--){
    res += solve();
  }
  cout << res << "\n";
  return 0;
}
