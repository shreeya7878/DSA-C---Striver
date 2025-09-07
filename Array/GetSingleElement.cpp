#include<bits/stdc++.h>
using namespace std;
int getSingleElement(vector<int> a) {
  int xorr = 0;
  for(int i=0; i<a.size(); i++){
    xorr = xorr ^ a[i];
  }
  return xorr;
}