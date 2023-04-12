#include<iostream>
#include<stdlib.h>
#include<vector>
#include<queue>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    int level;
    int hd;
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
void left_right_view_traversal(struct node *t){
    queue<struct node *>Q;
    int h=height(t);
    vector<int>ht[h+1];
    Q.push(t);
    t->level=0;
    ht[t->level].push_back(t->data);
    while(Q.size()!=0){
        struct node *x;
        x=Q.front();
        Q.pop();
        if(x->left!=NULL){
            x->left->level=x->level+1;
            Q.push(x->left);
            ht[x->left->level].push_back(x->left->data);
        }
        if(x->right!=NULL){
            x->right->level=x->level+1;
            Q.push(x->right);
            ht[x->right->level].push_back(x->right->data);
        }
    }
    cout<<endl<<"left view of the tree is:=> ";
    for(int i=0; i<=h; i++){
        cout<<ht[i][0]<<" ";
    }
    cout<<endl<<"right view of the tree is:=> ";
    for(int i=0; i<=h; i++){
        int x;
        x=ht[i].size();
        cout<<ht[i][x-1]<<" ";
    }
}
void top_bottom_view_traversal(struct node *t){
    queue<struct node *>Q;
    int h=height(t);
    cout<<"height is:=> "<<h;
    vector<int>ht[2*h+1];
    Q.push(t);
    t->hd=0;
    ht[t->hd+h].push_back(t->data);
    while(Q.size()!=0){
        struct node *x;
        x=Q.front();
        Q.pop();
        if(x->left!=NULL){
            x->left->hd=x->hd-1;
            Q.push(x->left);
            ht[x->left->hd+h].push_back(x->left->data);
        }
        if(x->right!=NULL){
            x->right->hd=x->hd+1;
            Q.push(x->right);
            ht[x->right->hd+h].push_back(x->right->data);
        }
    }
    cout<<endl<<"top view of the tree is:=> ";
    for(int i=0; i<2*h+1; i++){
        if(ht[i].size()!=0){
            cout<<ht[i][0]<<" ";
        }
    }
    cout<<endl<<"bottom view of the tree is:=> ";
    for(int i=0; i<2*h+1; i++){
        int x;
        x=ht[i].size();
        if(ht[i].size()!=0){
            cout<<ht[i][x-1]<<" ";
        }
    }
}
void zig_zag_traversal(struct node *t){
    queue<struct node *>Q;
    int h=height(t);
    vector<int>ht[h+1];
    Q.push(t);
    t->level=0;
    ht[t->level].push_back(t->data);
    while(Q.size()!=0){
        struct node *x;
        x=Q.front();
        Q.pop();
        if(x->left!=NULL){
            x->left->level=x->level+1;
            Q.push(x->left);
            ht[x->left->level].push_back(x->left->data);
        }
        if(x->right!=NULL){
            x->right->level=x->level+1;
            Q.push(x->right);
            ht[x->right->level].push_back(x->right->data);
        }
    }
    cout<<endl<<"zig zag traversal of the tree is:=> ";
    int flag=1;
    for(int i=0; i<=h; i++){
        if(flag%2!=0){  //print left to right 
            for(int j=0; j<ht[i].size(); j++){
                cout<<ht[i][j]<<" ";
            }
        }
        else{            //print right to left
            for(int j=ht[i].size()-1; j>=0; j--){
                cout<<ht[i][j]<<" ";
            }
        }
        flag++;
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
    // cout<<"\n left right view traversal is:=> ";
    left_right_view_traversal(root);
    top_bottom_view_traversal(root);
    zig_zag_traversal(root);
    return 0;
}