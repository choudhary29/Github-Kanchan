#include<iostream>
using namespace std;
struct node * enqueue(struct node * pq,struct node * x){
    struct node *p=NULL;
    struct node *q=NULL;
    p=pq;
    q=NULL;
    while(x->freq>=p->freq){
        q=p;
        p=p->next;
    }
    if(q==NULL){
        x->next=pq;
        pq=x;
    }
    else{
        x->next=q->next;
        q->next=x;
    }
}
struct node *dequeue(struct node *pq){
    struct node *p=NULL;
    p=pq;
    pq=pq->next
    return p;
}
struct node *huffman_tree(c[],f[],n){
    
}

