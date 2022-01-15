#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    if(n>0){
        cout<<"Yes!! This is the positive number "<<endl;
    }else{
        if(n==0){
            cout<<"This number is 0 "<<endl;
        }else{
            cout<<"No!! This is the negative number "<<endl;
        }
    }
    return 0;
}