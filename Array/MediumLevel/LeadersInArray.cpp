//leaders in an array-> everything in the right should be smaller
#include<bits/stdc++.h>
using namespace std;
vector<int> superiorElement(vector<int> a){
   //O(N)
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();
    //O(N)
    for(int i =n-1; i>=0; i--) {
      if(a[i] > maxi) {
        ans.push_back(a[i]);
      }
      //keep track of right max
      maxi = max(maxi, a[i]);
    }

    //O(N log N)
    sort(ans.begin(), ans.end());
    return ans;
}