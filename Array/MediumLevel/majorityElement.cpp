#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> a)
{
  int cnt=0;
  int el;
  
  for(int i=0; i<a.size(); i++) {
    if(cnt == 0) {
        cnt=1;
        el = a[i];
    }
    else if(a[i] == el) {
        cnt++;
    }
    else {
        cnt--;
    }
  }
  int cnt1 = 0;
  for(int i=0; i<a.size(); i++) {
      if(a[i] == el) cnt++;
  }
  if(cnt1 > (a.size() / 2)) {
    return el;
  }
  return -1;
}
//TC->O(N)
//SC->O(1)