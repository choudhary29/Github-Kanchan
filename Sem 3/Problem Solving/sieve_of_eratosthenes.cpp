    #include<iostream>
    using namespace std;
    int prime[1000]={0};
        int a=0;
        for(int i=2; i<=n; i++){
            if(prime[i]==0){
                for (int j=i*i; j<=n; j++){
                    prime[j]=1;
                }
            }
        }
        for(int i=2; i<=n; i++){
            if(prime[i]==0){
                a=i;
            }
        }
     return a;