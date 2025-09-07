//kadane's algorithm, maximum subarray sum
#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int n){

  int sum = 0;
  int maxi = INT_MAX;
  for(int i=0; i<n; i++) {
    sum += arr[i];
    if(sum > maxi) {
      maxi = sum;
    }
    if(sum < 0){
      sum = 0;
    } 
  }
  return maxi;
}
//TC->O(N)
//SC->O(1)