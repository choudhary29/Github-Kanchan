#include<iostream>
using namespace std;
double volume(int r)
{
    double v{1};
    double pi=3.14;
    for(int i=1; i<=r; i++){
       v=1.334*pi*r*r*r;
    }
    return v;
}
int main(){
    double x;
    x=volume(4);
    cout<<x;
    return 0;
}