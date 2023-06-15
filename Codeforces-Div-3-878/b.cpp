#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, k;
    cin >> n >> k;

    k = min((long long)log2(n) + 1, k);
    cout << min((long long)pow(2, k), n + 1) << "\n";
  }
  return 0;
}