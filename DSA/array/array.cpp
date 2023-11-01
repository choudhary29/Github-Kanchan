#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0; i<size; i++){
    cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5]={ 1,2,3,4,5};
    printarray(arr,5);
cout<<endl<<endl;
    int first[5]={1};
    int firstsize=sizeof(first)/sizeof(int);
    cout<<firstsize<<endl;
cout<<endl<<endl;
    char ch[5]={'a','b','g','t','r'};
    for(int j=0; j<5; j++){
        cout<<ch[j]<<endl;
    }

    return 0;
}