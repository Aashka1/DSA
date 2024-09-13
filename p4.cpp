// stack in linked list
#include <iostream>
using namespace std;
struct Node{
    int d;
    Node *n;
    Node(int x){
        d=x;
        n=nullptr;
    }
};
struct Mystack{
    Node *head;
    int s;
    Mystack(){
        head=nullptr;
        s=0;
    }
    void push(int x){
        Node *t=new  Node(x);
        t->n=head;
        head=t;
        s++;
    }
    int pop(){
        int r=head->d;
        Node *t=head;
        head=head->n;
        
        delete t;
        s--;
        return r;
    }
    
};