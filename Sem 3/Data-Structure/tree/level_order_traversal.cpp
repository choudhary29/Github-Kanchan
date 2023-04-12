#include<iostream>
#include<stdlib.h>
#include<vector>
#include<queue>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *makenode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void create_tree(struct node **t){
    int choice,x;
    struct node *p;
    cout<<"whether the left of "<<(*t)->data<<"exists? (1/0)";
    cin>>choice;
    if(choice==1){
        cout<<"input the data of left of "<<(*t)->data;
        cin>>x;
        p=makenode(x);
        (*t)->left=p;
        create_tree(&p);
    }
    cout<<"whether the right of "<<(*t)->data<<"exists? (1/0)";
    cin>>choice;
    if(choice==1){
        cout<<"input the data of right of "<<(*t)->data;
        cin>>x;
        p=makenode(x);
        (*t)->right=p;
        create_tree(&p);
    }
}
int height(struct node *t){
    int l,r,max;
    if(t==NULL){
        return 0;
    }
    else
    {
        if(t->left==NULL && t->right==NULL){
            return 0;
        } 
        else{
            l=height(t->left);
            r=height(t->right);
            max=l>r?l:r;
            return 1+max;
        }
    }
}
void pre_order_traversal(struct node *t){
    if(t!=NULL){
        cout<<t->data<<" ";
        pre_order_traversal(t->left);
        pre_order_traversal(t->right);
    }
}
void in_order_traversal(struct node *t){
    if(t!=NULL){
        in_order_traversal(t->left);
        cout<<t->data<<" ";
        in_order_traversal(t->right);
    }
}
void post_order_traversal(struct node *t){
    if(t!=NULL){
        post_order_traversal(t->left);
        post_order_traversal(t->right);
        cout<<t->data<<" ";
    }
}
void level_order_traversal(struct node *t){
    queue<struct node *>Q;
    Q.push(t);
    while(Q.size()!=0){
        struct node *x;
        x=Q.front();
        Q.pop();
        if(x->left!=NULL){
            Q.push(x->left);
        }
        if(x->right!=NULL){
            Q.push(x->right);
        }
        cout<<x->data<<" ";
    }
}
int main(){
    struct node *root=NULL, *l;
    int x,y;
    cout<<"enter the data of root node";
    cin>>x;
    root=makenode(x);
    create_tree(&root);
    cout<<"\n pre order traversal is:=> ";
    pre_order_traversal(root);
    cout<<"\n in order traversal is:=> ";
    in_order_traversal(root);
    cout<<"\n post order traversal is:=> ";
    post_order_traversal(root);
    cout<<"\n level order traversal is:=> ";
    level_order_traversal(root);
    return 0;
}