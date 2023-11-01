#include<bits/stdc++.h>
using namespace std;
void swapalternate(int arr[],int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }

    }
}
void printarray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // int a[10];
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cin>>a[i];
    // }
    // int start=n;
    // int end=n-1;
    // while(start<=end){
    //     swap(a[start],a[end]);
    //     start=start-1;
    //     end=end-3;
    // }
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    // return 0;


    int a[9]={1,2,3,4,5,6,7,8,9};
    swapalternate(a,9);
    printarray(a,9);
    return 0;
}