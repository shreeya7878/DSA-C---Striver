#include<bits/stdc++.h>
using namespace std;

int EquilateralAlgo(int a, int b){ //gcd
  while(a > 0 && b > 0){
    if(a > b) a = a % b;       //TC-O(logphi min(a,b))
    else b = b % a;
  }
  if(a==0) cout << b << " ";
  else cout << a << " ";
}
int main(){
  int a;
  int b;
  cin >> a >> b;
  EquilateralAlgo(a,b);
  return 0;
}