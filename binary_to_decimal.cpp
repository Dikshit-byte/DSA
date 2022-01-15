#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter the bits : ";
    cin>>n;
  int ans,i;
  ans = i = 0;
    while(n!=0){
      int digit = n%10;
      if(digit == 1){
        ans += pow(2,i);
      }
      n = n/10;
      i++;
    }
    cout<<ans<<" ";
    return 0;
}