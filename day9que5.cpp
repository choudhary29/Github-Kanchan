// number of steps to reduce a
#include<iostream>
using namespace std;
int number(int n){
int count=0;
while(n!=0){
    if(n%2==0){
      n= n/2;
      count++;
    }
    else{
       n= n-2;
       count++;
    }
}
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<number;
    return 0;
}