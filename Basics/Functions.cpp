#include<bits/stdc++.h>
using namespace std;

//void function
// void printName(string name){
//   cout << "hey " << name << endl;
// }
// int main(){
//   string name;
//   cin >> name;
//   printName(name);

//   string name2;
//   cin >> name2;
//   printName(name2);
//   return 0;
// }

//parameterised function
// int sum(int num1, int num2) {
//     int num3 = num1 + num2;
//     return num3;
// }

// int main(){
//   int num1,num2;
//   cin >> num1 >> num2;
//   // int res = sum(num1, num2);
//   int minimum = min(num1,num2);
//   cout << minimum;
//   // cout << res;
//   return 0;
// }

//pass by value
// void doSomething(int num){
//   cout << num << endl;
//   num +=5;
//   cout << num << endl;
//   num +=5;
//   cout << num << endl;
// }
// int main(){

//   int num =10;
//   doSomething(num);
//   cout << num << endl;
//   return 0;
// }

//pass by value
// void doSomething(string s){
//   s[0] = 't';
//   cout << s << endl;
// }
// int main(){

//   string s = "raj";
//   doSomething(s);
//   cout << s << endl;
//   return 0;
// }

//pass by reference
// void doSomething(string &s){
//   s[0] = 't';
//   cout << s << endl;
// }
// int main(){

//   string s = "raj";
//   doSomething(s);
//   cout << s << endl;
//   return 0;
// }

//pass by reference
void doSomething(int arr[], int n){
    arr[0] += 100;
  cout << "Value inside function: " << arr[0] << endl;
}
int main(){
    int n =5;
    int arr[n];
    for(int i = 0; i<n; i++){
      cin >> arr[i];
    }

    doSomething(arr, n);
    cout << "Value inside int main: " << arr[0] << endl;
    return 0;
}
