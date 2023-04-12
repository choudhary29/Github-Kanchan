#include<iostream>
using namespace std;
int main(){
    int n;
    double sum{};
    
    cin>>n;
    for(int i=1; i<=n; i++){
        sum=sum+1.0/i;
         
    }
    cout<<sum;
   
    return 0;
}