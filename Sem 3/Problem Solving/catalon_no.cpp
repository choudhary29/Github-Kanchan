#include <iostream>
using namespace std;
long catalon_no(long n){
    if (n<=1) {
    return 1;
    }
    else {
        long sum=0;
        for(long i=0;i<n;i++){
            sum+=catalon_no(n-1-i)*catalon_no(i);
        }
        return sum;
    }
    return 0;
}
int main(){
    //  KC  try it for 21 and see the time delay🙂
    long n=21;
    cout<<"catalon number is :  "<<endl;
    for(long i=0;i<n;i++){
        cout<<catalon_no(i)<<" ";}
    return 0;
}