#include<iostream>
#include<cmath>
using namespace std;
int power(int p, int q){
    int pow;
    if(q>0){
        pow=p*power(p,q-1);
    }
    else{
        pow=1;
    }
    return pow;
}
int main(){
    int a,b;
    long k,p;
    cout<<"Enter the number to find the power of:"<<endl;
    cin>>a;
    cout<<"Enter the power to be calculated:"<<endl;
    cin>>b;
    p=power(a,b);
    cout<<p<<endl;
    k--;
    while(k--){
        p=p/10;
    }
    cout<<p%10<<endl;

    return 0;
}