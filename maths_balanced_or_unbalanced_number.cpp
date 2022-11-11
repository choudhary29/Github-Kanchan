#include<iostream>
using namespace std;
int main(){
    int n;
    int total=0;
    cin>>n;
    while(n>0){
        n=n/10;
        total++;
    }
    cout<<total;
    return 0;
}