//Hashing-> storing O(1)/fetching O(N) when required
//P:1->count elements of array
#include<bits/stdc++.h>
using namespace std;
//numbers
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//       cin >> arr[i];
//     }

//     // precompute
//     int hash[13] = {0};
//     for(int i=0; i<n; i++){
//       hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//       int number;
//       cin >> number;
//       // fetch
//       cout << hash[number] << endl;
//     }
//     return 0;
// }

//characters
// int main(){
//     string s;
//     cin >> s;

//     // pre compute
//     int hash[26] = {0};
//     for(int i=0; i<s.size(); i++){
//       hash[s[i] - 'a']++;
//     }
//     int q;
//     cin >> q;
//     while(q--){
//       char c;
//       cin >> c;
//       // fetch
//       cout << hash[c-'a'] << endl;
//     }
//     return 0;
// }

//STC->map/unordered-map
//collection->hashmap
//map<key(int)number,value(int)frequency>

//map
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   map<int, int> map;
//   for(int i=0; i<n; i++) {
//     cin >> arr[i];
//   }
  

  //iterate in the map
  // for(auto it : map) {
  //     cout << it.first << "->" << it.second << endl;
  // }

//   int q;
//   cin >> q;
//   while(q--){
//     int number;
//     cin >> number;
//     // fetch
//     cout << map[number] << endl;
//   }
// }

//Hashing Methods -> .Division Method .Folding Method .Mid Square Method