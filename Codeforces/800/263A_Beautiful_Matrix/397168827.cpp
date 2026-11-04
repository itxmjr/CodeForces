// Codeforces: https://codeforces.com/contest/263/A
// Problem: Beautiful Matrix
// Submission: https://codeforces.com/contest/263/submission/397168827
// Language: C++20 (GCC 13-64)
// Submitted: 2026-11-02T21:45:47.000Z
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

  int x, r, c;
  for (int i = 1; i <= 5; i++){
      for (int j = 1; j <= 5; j++){
        cin >> x;
        if (x == 1){r = i, c = j;}
      }
  }
  cout << abs(r-3) + abs(c-3) << "\n";
  return 0;
}
