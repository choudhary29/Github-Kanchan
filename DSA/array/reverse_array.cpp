#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int brr[9]={1,2,3,4,5,6,7,8,9};
    reverse(arr,10);
    reverse(brr,9);
    printarray(arr,10);
    printarray(brr,9);
    return 0;
}