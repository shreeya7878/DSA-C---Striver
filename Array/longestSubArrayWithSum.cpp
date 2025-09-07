#include<bits/stdc++.h>
using namespace std;

int longestSubArrayWithSum(vector<int> a, int k) {
  int left = 0, right = 0;
  int sum  = a[0];
  int maxLen = 0;
  int n = a.size();
  while(right < n) {
      while(left <= right && sum > k) {
          sum -= a[left];
          left++;
      }
      if(sum == k) {
        maxLen = max(maxLen, right - left + 1);
      }
      right++;
      if(right < n) sum += a[right];
  }
  return maxLen;
}