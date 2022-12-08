#include<iostream>
using namespace std;
int main(){
    int n,sum5,sum2;
    cin>>n;
     while(n/5!=0){
            sum5=sum5+n/5;
            n=n/5;
        }
        while(n/2!=0){
            sum2=sum2+n/2;
            n=n/2;
        }
        if(sum5>sum2){
            cout<<sum2;
        }
        else{
            cout<<sum5;
        }
    return 0;
}