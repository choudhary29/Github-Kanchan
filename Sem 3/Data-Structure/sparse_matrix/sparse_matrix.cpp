#include<iostream>
using namespace std;
int main(){
    int a[10][10]={{0,0,2},{2,4,0},{3,0,0}};
    int count=0;
    int row=3;
    int col=3;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(a[i][j]==0)
            count++;
        }
    }
    cout<<"The matrix is: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The number of zeroes in the matrix are: "<<count<<endl;
    if(count>((row*col)/2))
    cout<<"This is a sparse matrix.";
    else
    cout<<"This is not a sparse matrix.";

    return 0;
}