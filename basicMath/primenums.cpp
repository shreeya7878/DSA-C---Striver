#include<bits/stdc++.h>
using namespace std;

void primeNum(int n){
  int cnt = 0;
  for(int i=1; i*i<=n; i++){ //time complexity:-O(sqrt(n))
    if(n % i == 0){
        cnt++;
        if((n/i)!=i)
            cnt++;
    }
  }
  if(cnt == 2)
  cout << "Prime";
  else cout << "Not Prime";
}
int main(){
  int n;
  cin >> n;
  primeNum(n);
  return 0;
}