#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;
int cam(int mouse,int cat_1,int cat_2){
    if(abs(mouse-cat_1)>abs(mouse-cat_2)){
        cout <<"Cat B";
    }
    else if(abs(mouse-cat_1)==abs(mouse-cat_2)){
        cout <<"Mouse C";
    }
    else{
        cout <<"Cat A";
    }
return 0;
}
int main(){
    int t{};
    cin>>t;
    while(t--){int a,b,c;
    cin>>a,
    cam(a, b, c);}
    return 0;
}