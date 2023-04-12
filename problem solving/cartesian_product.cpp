#include<iostream>
using namespace std;
int main(){
    int a[10], b[10];
    int i,j,m,n;
    cout<<"Enter the size of set A"<<endl;
    cin>>m;
    cout<<"Enter the elements of set A"<<endl;
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"Enter the size of set B"<<endl;
    cin>>n;
    cout<<"Enter the elements of set B"<<endl;
    for(i=0;i<n;i++){
        cin>>b[i];
    }
     cout<<"a x b:";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"("<<a[i]<<","<<b[j]<<")";
        }
    }
    cout<<endl;
     cout<<"b x a:";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<"("<<b[i]<<","<<a[j]<<")";
        }
    }
    return 0;
}