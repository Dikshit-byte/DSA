#include<iostream>
#include<climits>
using namespace std;
 
int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[7] = {1,5,2,9,6,2,7};
    int brr[7] = {3,6,8,4,10,7,9};
    cout<<"IN arr : "<<endl;
    cout<<"The minimum number is : "<<getMin(arr,7)<<endl;
    cout<<"The maximum number is : "<<getMax(arr,7)<<endl;

    cout<<"IN brr : "<<endl;
    cout<<"The minimum number is : "<<getMin(brr,7)<<endl;
    cout<<"The maximum number is : "<<getMax(brr,7)<<endl;
    return 0;
}