#include <iostream>
using namespace std;
int natural(int n){
    int sum{};
  for(int i=1;i<=n;i++){ 
     sum+=i;}
  return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<natural(n);
    return 0;
}