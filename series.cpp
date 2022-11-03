#include<iostream>
using namespace std;
int main(){
    int n;
    int sum{};
    int f{1};
    int sign{1};
    cin>>n;
    for(int i=1; i<=n; i++){
        f=f*i;
        sum=sum+sign*f;
        sign=sign*(-1);
         
    }
    cout<<sum;
   
    return 0;
}