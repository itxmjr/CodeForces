// Codeforces: https://codeforces.com/contest/158/A
// Problem: Next Round
// Submission: https://codeforces.com/contest/158/submission/397167999
// Language: C++20 (GCC 13-64)
// Submitted: 2026-11-02T21:23:24.000Z
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

  int n, k, x, kthX = 0;
  int res = 0;
  cin >> n >> k;
  for(int i = 1; i <=n; i++){
      cin >> x;
      if (i == k) kthX = x;
      if (i <= k) {if(x > 0) res++;}
      else if (x >= kthX && x > 0) res++;
  }
  cout << res << "\n";
  return 0;
}
