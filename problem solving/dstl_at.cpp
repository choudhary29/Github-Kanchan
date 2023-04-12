#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],c[10],d[10],m=0,k=0,n1,n2,l,i,j;
    cout<<"Enter size of set A";
    cin>>n1;
    cout<<"Enter the elements of set A";
    for( i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"Enter size of set B";
    cin>>n2;
    cout<<"Enter the elements of set B";
    for( i=0;i<n2;i++){
        cin>>b[i];
    }


    for( i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
            break;
        }
        if(j==n2)
        { 
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }
        
    }
    
    
    
    for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
         
            for(l=0;l<m;l++) 
            {
                if(d[l]==b[i])
                 break;
            }
            if(l==m)
            {
                d[m]=b[i];
                m++;
            }
        }
        
    }
     cout<<"Difference of A-B is:-"<<endl;
     for(i=0;i<k;i++)
     {
        cout<<c[i];
     }
    cout<<endl;
     cout<<"Difference of B-A is:-"<<endl;
     for(i=0;i<m;i++)
     {
         cout<<d[i];
     }
    return 0;
    
}