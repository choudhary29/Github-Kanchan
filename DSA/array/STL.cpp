////////////  ARRAY  /////////////

// #include<iostream>
// #include<array>
// using namespace std;
// int main(){

//     int basicArr[3]={1,2,3};
//     array<int,4>a={1 ,2,3,4};
//     int size=a.size();
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"element at second index: "<<a.at(2)<<endl;
//     cout<<"empty or not: "<<a.empty()<<endl;
//     cout<<"first element: "<<a.front()<<endl;
//     cout<<"last element: "<<a.back()<<endl;
//     return 0;
// }

////////////  VECTOR  /////////////
// VECTOR IS A DYNAMIC ARRAY

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;

    vector<int> vec(5,1);
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;

    cout<<"element at second index: "<<v.at(2)<<endl;
    cout<<"empty or not: "<<v.empty()<<endl;
    cout<<"first element: "<<v.front()<<endl;
    cout<<"last element: "<<v.back()<<endl;

    cout<<"before pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"before clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size: "<<v.size()<<endl;

    cout<<"before clear capacity: "<<v.capacity()<<endl;
    v.clear();
    cout<<"after clear capacity: "<<v.capacity()<<endl;

    return 0;
}