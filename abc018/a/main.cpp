#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
typedef long long ll;

int main() {
  int a,b,c;
  cin>>a>>b>>c;
  cout << (1+(a<b)+(a<c)) << endl;
  cout << (1+(b<a)+(b<c)) << endl;
  cout << (1+(c<a)+(c<b)) << endl;
}