#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

// Shortcuts for "common" constants
const int INF = 1e9;              // 10^9 = 1B is < 2^31 - 1
const long long LLINF = 4e18;     // 4 * 10^18 is < 2^63 - 1
const double EPS = 1e-9;          // a very small number

vector<string> split(string &str, char delimeter) {
  istringstream ss(str);
  string token;
  vector<string> v;

  while (getline(ss, token, delimeter)) {
    v.push_back(token);
  }

  return v;
}

void removeChar(string &str, char charToRemove) {
  str.erase(remove(str.begin(), str.end(), charToRemove), str.end());
}

char itoa(int i) { return '0' + i; }

int main() {


  return 0;
}