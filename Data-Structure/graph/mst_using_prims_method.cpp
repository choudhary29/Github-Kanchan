#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ipair;
int main(){
    int n,e,i,a,b,cost;
    cout<<"enter the number of vertices ";
    cin>>n;
    vector<pair<int, int>>adj[n];
    cout<<"enter the number of edges ";
    cin>>e;
    for(i=1; i<=e; i++){
        cout<<"enter the endpoints of edge followed by cost"<<i<<":";
        cin>>a>>b>>cost;
        adj[a].push_back({b,cost});
        adj[b].push_back({a,cost});
    }
    for(i=0; i<n; i++){
        int j=0;
        cout<<i<<":";
        for(int j=0; j<adj[i].size(); j++){
            cout<<"("<<adj[i][j].first<<",";
            cout<<adj[i][j].second<<"), ";
        }
        cout<<endl;
    }
    vector<int>InMST(n,0);
    vector<int>key(n,INT_MAX);
    vector<int>predecessor(n,-1);
    key[0]=0;

    priority_queue <ipair, vector <ipair>, greater<ipair>> pq;
    pq.push({0,0}); //key, vertex
    for(i=1; i<n ; i++){
        pq.push({INT_MAX,i});
    }
    for(i=1; i<=n-1; i++){
        pair<int,int>x=pq.top();
        pq.pop();

        int v=x.second;
        InMST[v]=1;
        for(int j=0; j<adj[v].size(); j++){
            int vertex=adj[v][j].first;
            int weight=adj[v][j].second;
            if(InMST[vertex]==0 && key[vertex]>weight){
                key[vertex]=weight;
                predecessor[vertex]=v;
                //updated key value getting stored in the pq
                //pair key,vertex
                pq.push({key[vertex],vertex});
            }
        }
    }
    cout<<"MST is"<<endl;
    cout<<"vertex   key"<<" predecessor"<<endl;
    for(i=0; i<n; i++){
        cout<<i<<"\t";
        cout<<key[i]<<"\t";
        cout<<predecessor[i];
        cout<<endl;
    }
}
// 7 11
// 0 1 7
// 0 3 5
// 1 2 8
// 1 4 7
// 1 3 9
// 1 4 5
// 3 4 15
// 3 5 6
// 4 5 8
// 4 6 9
// 5 6 11





// enter the number of vertices 7 11
// enter the number of edges enter the endpoints of edge followed by cost1:0 1 7
// enter the endpoints of edge followed by cost2:0 3 5
// enter the endpoints of edge followed by cost3:1 2 8
// enter the endpoints of edge followed by cost4:1 4 7
// enter the endpoints of edge followed by cost5:1 3 9
// enter the endpoints of edge followed by cost6:1 4 5
// enter the endpoints of edge followed by cost7:3 4 15
// enter the endpoints of edge followed by cost8:3 5 6
// enter the endpoints of edge followed by cost9:4 5 8
// enter the endpoints of edge followed by cost10:4 6 9
// enter the endpoints of edge followed by cost11:5 6 11
// 0:(1,7), (3,5), 
// 1:(0,7), (2,8), (4,7), (3,9), (4,5), 
// 2:(1,8), 
// 3:(0,5), (1,9), (4,15), (5,6), 
// 4:(1,7), (1,5), (3,15), (5,8), (6,9), 
// 5:(3,6), (4,8), (6,11), 
// 6:(4,9), (5,11), 
// MST is
// vertex   key predecessor
// 0       0       -1
// 1       7       0
// 2       8       1
// 3       5       0
// 4       5       1
// 5       6       3
// 6       9       4