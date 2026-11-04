// Codeforces: https://codeforces.com/contest/50/A
// Problem: Domino piling
// Submission: https://codeforces.com/contest/50/submission/397168193
// Language: C++20 (GCC 13-64)
// Submitted: 2026-11-02T21:28:03.000Z
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

  int m, n;
  cin >> m >> n;
  cout << (m*n)/2 << "\n";
  return 0;
}
