#include<bits/stdc++.h>
using namespace std;

int countdigits(int n){
  int cnt = 0;
  if (n == 0) return 1;
  n = abs(n); //negative numbers
  while (n > 0){
    cnt++;
    n /= 10;
  }
  return cnt;
}

int main(){
  int num;
  cin >> num;
  cout << "Number of digits: " << countdigits(num) << endl;
  return 0;
}

