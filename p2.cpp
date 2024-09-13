#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *l;
    Node *r;
    Node(int x){
        data=x;
        l=r=nullptr;
    }
};
Node *insert(Node *head,int d){
   
    if(head==nullptr){
        head=new Node(d);
        return head;
    }
    if(d<head->data){
        head->l=insert(head->l,d);
    }
    else if(d>head->data){
        head->r=insert(head->r,d);
    }
    return head;
}
void inorder(Node *head){
    if(head!=nullptr){
      inorder(head->l);
      cout<<head->data;
      inorder(head->r);
    }
}
Node *deleten(Node *head,int k){
if(head==nullptr){
    return head;
}
if(k<head->data){
    head->l=deleten(head->l,k);
}
else if(k>head->data){
    head->r=deleten(head->r,k);
}
if(head->l!=nullptr){
    Node *t=head->r;
    delete head;
    return t;

}
else if(head->r!=nullptr){
    Node *t=head->l;
    delete head;
    return t;
}
else{
    Node *s=head;
    Node *su=head->r;
    while(su->l!=nullptr){
        s=su;
        su=su->l;
    }
    if(s!=head){
        s->l=su->r;
    }
    else{
        s->r=su->r;
    }
    head->data=su->data;
    delete su;
    

}
return head;
}