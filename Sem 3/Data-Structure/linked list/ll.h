#include <iostream>
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
int delbeg(struct node **start){
    struct node *p=*start;
    *start=p->next;
    int x=p->info;
    free(p);
    return x;
}
int delaft(struct node **start,int a){
    struct node *p=*start;
    struct node *temp;
    if(p==NULL){
        cout<<"linklist underflows";
        exit(1);
    }
    if(p->next==NULL){
        int x=delbeg(start);
        return x;
    }
    while(p->next!=NULL){
             if(p->next->info==a){
                int x=p->next->info;
                p->next=(p->next)->next;
                free(p->next);
             return x;
             }
        p=p->next;
    }
    return 0;
}
int delend(struct node **start){
    struct node *p;
    p=*start;
    while((p->next)->next!=NULL){
        p=p->next;
    }
    int x=p->info;
    p->next=NULL;
    free(p->next);
    return x;
}
struct node *concatll(struct node **start1, struct node **start2){
    struct node *p,*q;
    p=*start1;
    q=*start2;
   if(*start1!=NULL){
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=*start2;
    return *start1;
   }
   else{
    return *start2;
   }
}
void traverse(struct node **start){
    struct node *p;
    p=*start;
    while(p!=NULL){
    cout<<p->info<<" ";
    p=p->next;
    }
    
}
void insaft(struct node **start,int a,int x){
    struct node *temp;
    temp=*start;
    while(temp!=NULL){
        if(temp->info==a){
            struct node *p;
            p=getnode();
            p->info=x;
            p->next=temp->next;
            temp->next=p;
            return;
            }
        temp=temp->next;
    }
}
void insend(struct node **start,int x){
    struct node *temp;
    temp=*start;
    if(temp==NULL){
        insbeg(start,x);
        return;
    }
    else{
        while(temp->next!=NULL){
        temp=temp->next;
    }
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=NULL;
    temp->next=p;
    }
}
void ordins(struct node**start, int key){
    struct node *p;
    struct node *q=NULL;
    q=NULL;
    p=*start;
    while(p!=NULL && key>=p->info){
        q=p;
        p=p->next;
    }
    if(q!=NULL){
        insaft(&q,q->info,key);
    }
    else{
        insbeg(start,key);
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