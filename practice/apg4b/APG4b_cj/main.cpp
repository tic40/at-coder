#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, sum = 0;
  cin >> N;
  vector<int> vec(N);

  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
    sum += vec.at(i);
  }
  int ave = sum / N;

  for (int i = 0; i < vec.size(); i++) {
    int r = (vec.at(i) < ave) ? ave - vec.at(i) : vec.at(i) - ave;
    cout << r << endl;
  }
}
