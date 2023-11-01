#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[5]={1,4,5,6,7};
    int key;
    cin>>key;
    bool found=search(arr,5,key);
    if(found){
        cout<<"present\n";
    }
    else{
        cout<<"absent\n";
    }
    return 0;
}