#include<bits/stdc++.h>
using namespace std;
// int getmax(int arr[],int size){
//     int maxi=INT_MIN;
//     for(int i=0;i<size;i++){
//         maxi=max(maxi,arr[i]);
//         // if(arr[i]>maxi){
//         //     maxi=arr[i];
//         // }
//     }
//     return maxi;
// }
// int getmin(int arr[],int size){
//     int mini=INT_MAX;
//     for(int i=0;i<size;i++){
//         mini=min(mini,arr[i]);
//         // if(arr[i]<mini){
//         //     mini=arr[i];
//         // }
//     }
//     return mini;
// }
int main(){

    // int size;
    // cin>>size;
    // int arr[10];
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    // }

    int arr[5]={1,2,3,4,5};
    // cout<<getmax(arr,size)<<endl;
    // cout<<getmin(arr,size)<<endl;

    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    return 0;
}





