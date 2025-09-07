#include<bits/stdc++.h>
using namespace std;

//In C++, std::vector<int> is used as a dynamic array to simplify working with collections of integers.
// Unlike fixed-size arrays, std::vector<int> can grow or shrink dynamically as elements are added or removed.
// No need to specify the size at the time of declaration
//Built-in Functions->push_back, pop_back, size, clear, resize, insert, and erase.
//Bruteforce solution
// vector<int> moveZeros(int n, vector<int> a){
//    //step1
//    vector<int> temp;
//    for(int i=0; i<n; i++){
//       if(a[i] != 0) {
//       temp.push_back(a[i]);
//       }
//    }
//    //step2
//    int nz = temp.size();
//    for(int i=0; i<nz; i++){
//     a[i] = temp[i];
//    }
//    //step3
//    for(int i=nz; i<n; i++){
//     a[i] = 0;
//    }

//    return a;
// }

//optimal solution
vector<int> moveZeros(int n, vector<int> a) {
  int j = -1;
  for(int i=0; i<n; i++){
    if(a[i] == 0){
      j = i;
      break;
    }
  }
  // no non zero numbers
  if(j == -1) return a;

  for(int i = j+1; i<n; i++){
    if(a[i] != 0) {
      swap(a[i],a[j]);
      j++;
    }
  }
  return a;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> result = moveZeros(n, a);

    
    for (int x : result) { //range-based for loop(C++11 feature)
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
