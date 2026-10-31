// Codeforces: https://codeforces.com/contest/71/A
// Problem: Way Too Long Words
// Submission: https://codeforces.com/contest/71/submission/396931825
// Language: C++20 (GCC 13-64)
// Submitted: 2026-10-31T21:22:51.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << endl
#else
#define dbg(x)
#endif

void solve(){
    string word;
    cin >> word;
    int len = word.length();
    if (len<=10) cout << word << "\n";
    else cout << word[0] << len - 2 << word[len-1] << "\n";
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
