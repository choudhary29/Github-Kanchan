#include<iostream>
using namespace std;
struct node{
    int  info;
    struct node *next ;
};
struct node *getnode(){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **start,int x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=*start;
    *start=p;
}
void traverse(struct node **start){
    struct node *p;
    p=*start;
    while(p!=NULL){
    cout<<p->info<<" ";
    p=p->next;
    }
    
}
struct node * splitll(struct node **start){
    struct node *t=*start;
    struct node *r=(*start)->next;
    while(r!=NULL && r->next!=NULL){
        t=t->next;
        r=r->next;
        r=r->next;
    }
    struct node *start2=t->next;
    t->next=NULL;
    return start2;
}
int main(){
    struct node *start=NULL;
    insbeg(&start,2);
    insbeg(&start,3);
    insbeg(&start,4);
    insbeg(&start,5);
    insbeg(&start,6);
    insbeg(&start,7);
    traverse(&start);
    cout<<endl;
    struct node *start2=splitll(&start);
    traverse(&start2);
    return 0;
}
