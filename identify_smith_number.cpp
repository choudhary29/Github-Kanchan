#include <iostream>
using namespace std;
// int main(){
//     int n=378;
//     int num=n;
//     int mul=1;
//     for(int i=2;i<=n;i++){
//         while(n%i==0){
//             // cout<<i<<" ";
//             mul=mul*i;
//             n=n/i;
//         }
//     }
//     // cout<<mul;
//     if (mul==num) {
//     cout<<"1";
//     }
//     else {
//     cout<<"0";
//     }
//     return 0;
// }
int solve(long n) {
    long num=n;
    long mul=1;
    int arr[100]={0};
    int sum=0;
    int j=0;
    for(int i=2;i<=num/5;i++){
        while(n%i==0){
            cout<<i<<" ";
            arr[j]=i;
            j++;
            n=n/i;
        }
    }
    // cout<<mul;
    cout<<endl;
    for(int i=0;i<j;i++){
        cout<<arr[i]<<" ";
        int num=arr[i];
        while(num!=0){
            int a=num%10;
            sum+=a;
            num=num/10;
        }
    }
    
    cout<<sum;
    cout<<endl;
    int sum2=0;
    while (num!=0) {
    int a=num%10;
    sum2+=a;
    num=num/10;
    }
if(sum==sum2){
    cout<< 1;
}
else {
cout<< 0;
}
return 0;}
#include <iostream>
using namespace std;
int main(){
    solve(378);
    cout<<endl;
    return 0;
}