#include "stack.h"
#include "t.h"
struct node {
  int data;
  struct node *left;
  struct node *right;
  struct node *next;
};


bool prcd(char a, char b){
    if(a=='^'||a=='*'||a=='/'||a=='%'){
        if(b=='^'){
            return false;
        }
        else{return true;}
    }
    else{ 
        if(b=='+'||b=='-'){
            return true;
        }
        else {
        return false;
        }
    }
}


// is_operand(){

// }


int build_expression_tree(char exp[]){
    struct stack(opnd stack){
    initialize(opnd stack){
        start=NULL;
    }
    };
    struct stack(operator stack){
    initialize(operator stack){
        t=-1;
    }
    };
    int i=o;
    while(exp[i]!=0){
        symb=exp[i];
        if(is_operand(symb)){
            x=makenode(symb);
            push(opnd stack,x);
        } 
        else{
            while(!is_empty(operator stack) && prcd(Stacktop(operator stack)symb)){
                op=pop(operator stack);
                t=makenode(op);
                b=pop(opnd stack);
                a=pop(opnd stack);
                t->left=a;
                t->right=b;
                push(opnd stack,t);
            }
            push(operator stack,symb);
        }
        while(!is_empty(operator stack)){
            op=pop(operator stack);
            t=makenode(op);
            b=pop(opnd stack);
            a=pop(opnd stack);
            t->left=a;
            t->right=b;
            push(opnd stack, t);
        }
    }
    return pop(opnd stack);
}

int main(){
    int x;
    Initialize();
    push(100);
    push(200);
    push(300);
    push(400);
    push(500);
    x=pop(0);
    cout<<"Popped element is:"<<x<<endl;
    x=pop(0);
    cout<<"Popped element is:"<<x<<endl;
     x=pop(0);
    cout<<"Popped element is:"<<x<<endl;
     x=pop(0);
    cout<<"Popped element is:"<<x<<endl;
     x=pop(0);
    cout<<"Popped element is:"<<x<<endl;
    
    
    return 0;
}