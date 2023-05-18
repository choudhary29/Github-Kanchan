#include<iostream>
#include<vector>
using namespace std;
int main(){
    int V,E;
    cout<<"enter vertex";
    cin>>V;
    cout<<"enter edge";
    cin>>E;
    vector<int>AdjList[V];
    for(int i=1;i<E+1;i++)
    {
        cout<<"enter edges"<<i;
        int a,b;
        cin>>a>>b;
        AdjList[a].push_back(b);
        AdjList[b].push_back(a);
    }
    for(int i=0;i<V;i++){
        cout<<i<<":";
        for(int j=0;j<AdjList[i].size();j++)
            cout<<AdjList[i][j];
        cout<<endl;
    }
    return 0;
}