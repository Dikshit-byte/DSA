#include <iostream>
#include<cmath>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  int ans,i;
  ans = i = 0;
  while(n!=0){
    int digit = (n&1);
    ans += (pow(10,i)*digit);
    n = n>>1;
    i++;
  }
  cout<<ans<<" ";
  return 0;
}
