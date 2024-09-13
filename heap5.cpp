#include <iostream>
using namespace std;
void heapify(int a[],int n,int i){
    int la=i;
    int l=2*i+1;
    int r=2*i+2;
    if (l<n&&a[l]>a[la]){
        la=l;
    }
    if (r<n&&a[r]>a[la]){
        la=r;
    }
    if(la!=i){
        swap(a[la],a[i]);
        heapify(a,n,la);
    }

}
void d(int a[],int n){
    for(int i=n/2-1;i>=0;i--){
        
        heapify(a,n,i);
    }
}
void heapsort(int a[],int n){
    d(a,n);
    for (int i=n-1;i>0;i--){
        swap(a[0],a[i]);
        heapify(a,n,i);
    }
    
}