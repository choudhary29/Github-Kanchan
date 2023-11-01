#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,2,3,3,2,1,4,4};
    int ans=0;
    int size;
    cin>>size;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    cout<<ans;
    return 0;
}