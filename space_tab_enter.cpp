// #include<iostream>
// using namespace std;
 
// int main(){
//     int a = cin.get();
//     cout<<a<<endl;
//     return 0;
// }


// How to fill an array at once with one single value

// #include <iostream>
// using namespace std;

// int main() {
//   int arr[100] = {[0 ... 99] = -4};
//   for(int i=0; i<100; i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// } 
// output is only visible on repl.it not on this ide

#include<iostream>
using namespace std;
 
int main(){
 int arr[100];
 fill_n(arr,100,-3);
  for(int i=0; i<100; i++){
    cout<<arr[i]<<" ";
  }
    return 0;
}