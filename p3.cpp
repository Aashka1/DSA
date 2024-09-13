// stack in array
#include<iostream>
using namespace std;
struct Mystack{
    int *arr;
    int cap;
    int t;
    Mystack(int c){
        arr=new int [c];
        cap=c;
        t=-1;
    }
    void push(int x){
    if(t==cap){
        return;
    }
    else{
        arr[++t]=x;
    }
}
int pop(){
    if(t=-1){
        return;
    }
    else{
        int p= arr[t];
        t--;
        return p;
    }
}
int peek(){
    int p1=arr[t];
    return  p1;
}
int size(){
    return t+1;
}
};

