#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[12]={1,2,3,4,5,6,6,7};
    int size=12 ;
    int ans=arr[0];
    for(int i=1;i<size;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
    for(int i=0;i<size;i++){
        ans=ans^i;
    }
    cout<<ans;
    return 0;
}