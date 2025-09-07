#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> a) {
  int ind = -1;
  int n = a.size();
  for(int i = n-2; i>= 0; i--) {
    if(a[i] < a[i+1]) {
      ind = 1;
      break;
    }
  }
  if(ind == -1) {
    reverse(a.begin(), a.end());
    return a;
  }

  for(int i=n-1; i>ind; i--) {
    if(a[i] > a[ind]) {
      swap(a[i], a[ind]);
      break;
    }
  }

  reverse(a.begin() + ind + 1, a.end());
  return a;
}