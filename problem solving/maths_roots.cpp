#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x,y,a,b,c,D;
    cout<<"Enter the values of a,b,c:"<<endl;
    cin>>a>>b>>c;
    D=((b*b)-(4*a*c));
    if(D==0){
        cout<<"real and equal"<<endl;
        x=(-b+ sqrt(D))/(2*a);
        y=(-b- sqrt(D))/(2*a);
        cout<<"the roots of the equation are:"<<endl<<x<<endl<<y<<endl;
    }
    else if(D>0){
        cout<<"real and distinct"<<endl;
        x=(-b+ sqrt(D))/(2*a);
        y=(-b- sqrt(D))/(2*a);
        cout<<"the roots of the equation are:"<<endl<<x<<endl<<y<<endl;
    }
    else{
        cout<<"imaginary and distinct"<<endl;
        x=(-b+ sqrt(abs(D)))/(2*a);
        y=(-b- sqrt(abs(D)))/(2*a);
        cout<<"the roots of the equation are:"<<endl<<x<<endl<<y<<endl;
    }
    
    return 0;
}