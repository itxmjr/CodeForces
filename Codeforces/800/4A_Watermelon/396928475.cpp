// Codeforces: https://codeforces.com/contest/4/A
// Problem: Watermelon
// Submission: https://codeforces.com/contest/4/submission/396928475
// Language: C++20 (GCC 13-64)
// Submitted: 2026-10-31T20:21:15.000Z
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

  int in = 0;
  cin >> in;

  if (in % 2 == 0 && in > 3) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
