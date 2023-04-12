#include<iostream>
using namespace std;
int main(){
    int r1=3,c1=3,r2=3,c2=3;
    int product[3][3];
    int a[3][3]={{1,2,3},{2,3,4},{3,4,5}};
    int b[3][3]={{1,2,3},{2,3,4},{3,4,5}};
    if(c1!=r2){
        cout<<"The column of first matrix must be equal to the row of second matrix";
    }
    else{
    cout<<"The first matrix is: "<<endl;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The second matrix is: "<<endl;
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0; j<c2; j++){
            product[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                product[i][j]+=a[i][k]*b[k][j];
            }
       }
    }
    cout<<"The product of matrices are:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0; j<c2; j++){
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    }
}