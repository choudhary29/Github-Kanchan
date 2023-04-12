#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
void max_heapify(int a[],int i,int n){
    while(2*i<=n){
        int l=2*i;
        int r=2*i+1;
        int m=l;
        if(r<=n){
            if(a[r]>a[l]){
                m=r;
            }
        }
        if(a[m]>a[i]){
            swap(a[m],a[i]);
        }
        else{
            break;
        }
        i=m;
    }
}
///////////////////////////////////////////////
void build_max_heap(int a[],int n){
    for(int i=round(n/2);i>0; i--){
        max_heapify(a,i,n);
    }
}
///////////////////////////////////////////////
void heap_sort(int a[],int n){
    build_max_heap(a,n);
    for(int j=n; j>=2; j--){
        swap(a[1],a[j]);
        max_heapify(a,1,j-1);
    }
}
///////////////////////////////////////////////
int main(){
    int arr[11]={-1,70,100,300,200,50,60,10,80,40,5};
    heap_sort(arr,10);                                         
    for(int i=1; i<=10; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
