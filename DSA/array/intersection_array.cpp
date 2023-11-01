// #include<bits\stdc++.h>
// using namespace std;
// int main(){
//     int arr1[]={1,2,3};
//     int arr2[]={1,3,5};
//     int ans=0;
//     for(int i=0;i<3;i++){
//         int element=arr1[i];
//         for(int j=0; j<3;j++){
//             ans=element;
//             arr2[j]=-12344567;
//             break;
//         }
//     }
//     cout<<ans;
      
//     return 0;
// }





#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> intersectionOfArray(vector<int>&arr1,int n,vector<int>&arr2,int m){
    int i=0,j=0;
    vector<int>ans;
    while(i<n && j<<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    ans.pop_back();
}
int main(){
    // int arr1[]={1,2,3,4,5};
    // int arr2[]={3,4,5,6,7,8,};
    // intersectionOfArray((1,2,3,4,5),5,&arr2,6);


}