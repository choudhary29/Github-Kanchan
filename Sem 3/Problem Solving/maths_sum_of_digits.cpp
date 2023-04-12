#include<iostream>
using namespace std;
int sum_of_digits(int n){
    int temp=0;
    int sum=0;
    while(n){
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    while(n>9){
        n=sum_of_digits(n);
    }
    cout<<n<<endl;
    return 0;
}