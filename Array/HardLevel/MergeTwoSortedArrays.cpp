#include<bits/stdc++.h>
using namespace std;

//optimal solution
void merge(int arr1[], int arr2[], int n, int m)
{
  int left = n-1;
  int right = 0;
  while(left >= 0 && right < m) {
    if(arr1[left] > arr2[right]) {
      swap(arr1[left], arr2[right]);
      left--, right++;
    }
    else {
      break;
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
  }
}

//TC-> O(min(n,m)) + O(n log n) + O(m log m)
//SC->O(1)