#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(5);
    s.insert(6);
    s.insert(2);
    s.insert(7);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl<<endl;
    cout<<s.count(0)<<endl;


    set<int>::iterator it;
    it=s.find(5);
    for(it;it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl<<endl;


    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl<<endl;

    
    s.erase(s.find(1));
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl<<endl;




    // set<int,greater<int>>ds;
    // ds.insert(2);
    // ds.insert(3);
    // ds.insert(1);
    // ds.insert(5);
    // ds.insert(6);
    // ds.insert(2);
    // ds.insert(7);
    // for(auto i:ds){
    //     cout<<i<<" ";
    // }
    // cout<<endl<<endl;
    // cout<<ds;
    // s.count(0)<<endl;
    return 0;

}