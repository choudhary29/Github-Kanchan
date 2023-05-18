#include<bits/stdc++.h>
using namespace std;
struct Process{
    int pid,bt,priority;
};
bool compare(Process a,Process b){
    return(a.priority,b.priority);
}
void WT(Process pro[],int n,int wt[]){
    wt[0]=0;
    for(int i=1;i<n;i++){
        wt[i]=pro[i-1].bt+wt[i-1];
    }
}
void tat(process pro[],int n,)
