#include<iostream>
using namespace std;
int prime(int n){
    int flag=0;
    for(int i=2; i<=n-i; i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}
int main(){
    int a;
    cin>>a;
    prime(a);
    return 0;
}