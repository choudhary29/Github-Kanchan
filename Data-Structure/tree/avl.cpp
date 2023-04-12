#include "t.h"
int balanced_factor(struct node *t){
    int hl, hr;
    if(t==NULL){
        return 0;
    }
    if(t->left==NULL){
        hl=0;
    }
    else{
        hl=1+t->left->h;
    }
    if(t->right==NULL){
        hr=0;
    }
    else{
        hr=1+t->right->h;
    }
    return hl-hr;
}
int main(){
     struct node *root = NULL;
  bst_insert(&root, 100);
  bst_insert(&root, 50);
  bst_insert(&root, 70);
  bst_insert(&root, 20);
  bst_insert(&root, 30);
  bst_insert(&root, 150);
  bst_insert(&root, 120);
  bst_insert(&root, 105);
  bst_insert(&root, 200);
  bst_insert(&root, 170);
  bst_insert(&root, 180);
  bst_insert(&root, 290);
  cout<<balanced_factor(root);
}