#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> a) {
  int maxi = 0;
  int cnt = 0;
  for(int i=0; i<a.size();i++){
    if(a[i]==1){
      cnt++;
      maxi = max(maxi,cnt);
    }
    else{
      cnt=0;
    }
  }
  return maxi;
}