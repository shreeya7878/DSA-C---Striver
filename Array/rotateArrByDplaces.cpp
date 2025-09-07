#include<bits/stdc++.h>
using namespace std;
//TC->O(n+d)
//SC->0(d)
// void leftRotate(int arr[], int n, int d){
//   d = d % n;

//   //store everthing in temp
//   int temp[d];
//   for(int i=0; i<d; i++){
//     temp[i] = arr[i];
//   }
  
//   //shifting
//   for(int i=d; i<n; i++){
//     arr[i-d] = arr[i];
//   }

//   //replace back temp into array
//   for(int i=n-d; i<n; i++){
//     arr[i] = temp[i-(n-d)];
//   }
  
// }


//TC->O(2n)
//SC->O(1)
void leftRotate(int arr[], int n, int d){
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++) cin >> arr[i];

  int d;
  cin >> d;
  leftRotate(arr,n,d);

  for (int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}