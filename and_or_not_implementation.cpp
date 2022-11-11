#include<iostream>
using namespace std;
int main(){
    int a, b, c, Res1, Res2, Res3;
    cout<<"Enter the values of a and b in binary:"<<endl;
    cin>>a,b;
    if((a==0&&b==0)||(a==1&&b==0)||(a==0&&b==1)){
        Res1=0;
    }
    else{
        Res1=1;
    }
    if((a==1&&b==1)||(a==1&&b==0)||(a==0&&b==1)){
        Res2=1;
    }
    else{
        Res2=0;
    }
    cout<<"Enter the values of c in binary:"<<endl;
    cin>>c;
    if(c==0){
        Res3=1;
    }
    else{
        Res3=0;
    }
    cout<<"The result of AND of a and b is: "<<Res1<<endl;
    cout<<"The result of OR of a and b is: "<<Res2<<endl;
    cout<<"The result of NOT of c is: "<<Res3<<endl;
    return 0;
    }



    