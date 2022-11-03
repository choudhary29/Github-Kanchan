//01 solid rectangle

//#include<iostream>
//using namespace std;
//int main(){
//  int n,m;
//    cin>>n>>m;
  //  for(int i=1; i<=n; i++){
    //    for(int j=1; j<=m; j++){
      //      cout<<"*";
        //}
        //cout<<endl;
    //}
    //return 0;
//}
//**************************************************
//02 hollow rectangle
//#include<iostream>
//using namespace std;
//int main(){
  //  int n,m;
    //cin>>n>>m;
    //for(int i=1; i<=n; i++){
      //  for(int j=1; j<=m; j++){
        //    if(i==1||i==n || j==1||j==m){
          //      cout<<"*";
            //}
            //else {
            //    cout<<" ";
            //}
        //}
        //cout<<endl;
    //}
    
//    return 0;
//**************************************************
//03 right angled triangle
//*
//**
//***
//****
//#include<iostream>
//using namespace std;
//int main(){
//int n;
//cin>>n;
//for(int i=1; i<=n; i++){
//for(int j=1;j<=i;j++){
//  cout<<"*";
//}
//  cout<<endl;
//}
//  return 0;
//}
//**************************************************
//04 inverted right angled triangle
//****
//***
//**
//*
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=n-i; j++){
//            cout<<"*";
//        }
//        cout<<endl;
//    }
//    return 0;
//}
//**************************************************
//05 half pyramid after 180' rotation
//    *
//   **
//  ***
// ****
//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=n; j++){
//            if(j<=n-i){
//                cout<<" ";
//            }
//            else{
//                cout<<"*";
//            }
//        
//    }
//    cout<<endl;
//
  //  }
//
//    return 0;
//}
//**************************************************
//06 inverted pyramid after 180' rotation
//****
// ***
//  **
//   *
//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=n; j++){
//            if(j<=i){
//               cout<<" ";
//            }
//            else{
//                cout<<"*";
//            }
//        }
//        cout<<endl;
//    }
//    return 0;
//}
//**************************************************07
//1
//22
//333
//4444
//55555
//666666
//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    for(int i=1; i<=n;i++){
//        for(int j=1; j<=i; j++){
//            cout<<i;
//        }
//        cout<<endl;
//    }
//    return 0;
//}
//**************************************************08
//1 
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
//#include<iostream>
//using namespace std; 
//int main(){
//    int n;
//    cin>>n;
//    int count{1};
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=i; j++){
//            cout<<count<<" ";
//            count++;
//        }
//        cout<<endl;
//   }
//    return 0;
//}
//**************************************************09
//8
//*   
//**
//***
//****
//***
//**
//*

//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    for(int i=1; i<=n/2; i++){
//        for(int j=1; j<=n/2; j++){
  //          if(j<=i){
    //            cout<<"*";
      //      }
        //    else{
          //      cout<<" ";
            //}
        //}
        //cout<<endl;
  //  }
    //for(int i=1; i<=n/2; i++){
      //  for(int j=1; j<=n/2; j++){
        //    if(j<=n/2-i){
          //      cout<<"*";
            //}
       //     else{
        //        cout<<" ";
         //   }
//
  //      }
    //    cout<<endl;
    //}
   // return 0;
//}
//**************************************************10
//5
//*        *
//**      **
//***    ***
//****  ****
//**********
//**********
//****  ****
//***    ***
//**      **
//*        *
//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
 //   for(int i=1; i<=n; i++){
   //     for(int j=1; j<=i; j++){
     //       cout<<"*";
       // }
  //      int space= 2*n-2*i;
    ///    for(int j=1; j<=space; j++){
       //     cout<<" ";
  //      }
    //    for(int j=1; j<=i; j++){
      //      cout<<"*";
        //}
//        cout<<endl;
  //  }
    //for(int i=n; i>=1; i--){
      //  for(int j=1; j<=i; j++){
        //    cout<<"*";
        //}
 //       int space= 2*n-2*i;
   //     for(int j=1; j<=space; j++){
     //       cout<<" ";
       // }
        //for(int j=1; j<=i; j++){
         //   cout<<"*";
        //}
        //cout<<endl;
    //}
    //return 0;
//}
//**************************************************11
//6
//1 2 3 4 5 
//1 2 3 4
//1 2 3
//1 2
//1
//#include<iostream>
//using namespace std;
//int main(){
//    int n;
  //  cin>>n;
    //for(int i=1; i<=n; i++){
      //  for(int j=1; j<=n-i; j++){
        ///    cout<<j<<" ";
 //       }
   //     cout<<endl;
    //}
    //return 0;
//}
//**************************************************12
//1 
//0 1
//1 0 1
//0 1 0 1
//1 0 1 0 1
//#include<iostream>
//using namespace std;
//int main(){
//    int n;
  //  cin>>n;
    //for(int i=0; i<=n; i++){
      //  for(int j=1; j<=i; j++){
        //    if((i+j)%2==0){
          //      cout<<"1"<<" ";
            //}
           // else{
             //   cout<<"0"<<" ";
 //           }
   //     }
     //   cout<<endl;
    //}
    //return 0;
//}
//**************************************************13
//5
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *
//#include<iostream>
//using namespace std;
//int main(){
  //  int n;
    //cin>>n;
 //   for(int i=1; i<=n; i++){
   //     for(int j=1; j<=n-i; j++){
     //       cout<<" ";
       // }
        //for(int j=1; j<=n; j++){
          //  cout<<" *";
        //}
       // cout<<endl;
   // }
   // return 0;
//}
//**************************************************14
//5
//    1 
//   1 2
//  1 2 3
// 1 2 3 4
//1 2 3 4 5
//#include<iostream>
//using namespace std;
//int main(){
//    int n;
  //  cin>>n;
    //for(int i=1; i<=n; i++){
      //  for(int j=1; j<=n-i; j++){
        //    cout<<" ";
        //}
        //for(int j=1; j<=i; j++){
        //    cout<<j<<" ";
        //}
        //cout<<endl;
 //   }
   // return 0;
//}
//**************************************************15
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=n; i>=1; i--){
       for(int j=1; j<=i; j++){
           cout<<j;
        }
       int space= 2*n-2*i;
       for(int j=1; j<=space; j++){
           cout<<" ";
       }
        for(int j=1; j<=i; j++){
           cout<<n-j;
        }
        cout<<endl;
    }
    return 0;
}
   