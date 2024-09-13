// linked list and problem with array they bith are sequential and linear data structure
// c++
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
int arr[100];//fixed size array stored in stack
int arr[n];//variable size arrray stored in stack
// the both above goes out of scope onse function call is over
int *arr=new int [n];//dynamically allocated memory on heap
vector<int> v; // This creates a dynamic array (vector) that can grow automatically.
/*problems in arrays
1-preallocated space is done beforehand,the space is  fixed,solved by dynamic size is array .
2-the worst case insertion at the end is theta(n)
3-insetion/deletion in the middle or beginning is costly as they have to be continous
4-implemention of dat structure like queue and deque is complex with array
ex-**-round robin is difficult
**-given a sequence of items .whenever we see on item we replace it with another sequence of instances
**-we have multiple sorted sequences and we need merge them frequently.*/ 
}

