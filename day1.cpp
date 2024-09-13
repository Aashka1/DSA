#include <iostream>
using namespace std;
void subset(string n){
    int b=n.length();
    for(int i=0 ;i<b;i++){
       for (int j=i;j<b;j++){
        cout<<n.substr(i, j-i+1);
       }
    }
}
int main(){
subset("abcba");
}
