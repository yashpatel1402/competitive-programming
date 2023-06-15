#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int ss;
    cin >> ss;

    string s;
    cin >> s;

    vector<char> vc;
    vc.push_back(s[0]);
    for (int i = 1; i < ss; i++) {
      if (s[i] == vc.back()) {
        if (i + 1 < ss) {
          vc.push_back(s[i + 1]);
          i++;
        }
      }
    }

    for (auto c : vc) cout << c;
    cout << "\n";
  }

  return 0;
}