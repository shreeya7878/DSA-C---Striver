#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n){
  int i=0;
  for(int j=1; j<n; j++){
    if(arr[i] != arr[j]) {
      arr[i+1] = arr[j];
      i++;
      
    }
  }
  return i+1;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++) cin >> arr[i];

  int newlength = removeDuplicates(arr,n);

  cout << "Array after removing duplicates: ";
  for(int i=0; i<newlength; i++){
      cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}  