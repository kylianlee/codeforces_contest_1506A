//
// Created by Kylian Lee on 2021/06/22.
//

#include <iostream>

using namespace std;

long long solution(int n, long long m, long long x);

int main() {
  int n, m, caseNum;
  long long x;
  cin >> caseNum;
  for (int i = 0; i < caseNum; ++i) {
    cin >> n >> m >> x;
    cout << solution(n, m, x) << endl;
  }
  return 0;
}

long long solution(int n, long long m, long long x){
  if(n == 1 && m == 1 && x == 1)
    return 1;
  int reminder = x % n - 1;
  long long quotient = x / n + 1;
  if(reminder == -1) {
    reminder = n - 1;
    quotient = x / n;
  }
  return m * reminder + quotient;
}
