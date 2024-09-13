// #include <iostream>
// #include <vector>

// std::vector<int> rec(int *n, int b, int s, int size) {
//     std::vector<int> v;  // Initialize a vector
//     if (s >= size) {
//         return v;  // Base case: Index out of bounds
//     } else if (n[s] == b) {
//         v.push_back(s + 1);  // Store 1-based index
//     }
//     std::vector<int> result = rec(n, b, s + 1, size);  // Recursive call without 'v' argument
//     v.insert(v.end(), result.begin(), result.end());  // Merge the results
//     return v;
// }

// int main() {
//     int a[10] = {1, 2, 3, 4, 5, 6, 7, 5, 9, 10};  // Create an array of 10 integers
//     int value_to_find = 5;  // Value to search for
//     int size = sizeof(a) / sizeof(a[0]);  // Calculate the size of the array
//     std::vector<int> result;  // Vector to store the result
//     result=rec(a, value_to_find, 0, size);  // Call the recursive function

//     // Output the result
//     if (result.empty()) {
//         std::cout << "Value not found" << std::endl;
//     } else {
//         std::cout << "Occurrences at indices: ";
//         for (int idx : result) {
//             std::cout << idx << " ";
//         }
//         std::cout << std::endl;
//     }
    
//     return 0;  // Return 0 to indicate successful execution
// }
// #include<iostream>
// using namespace std;
// void r(int n,int m,int *a){
//  if(m<n){
//     if(a[n]<a[m]){
//         int t=a[n];
//         a[n]=a[m];
//         a[m]=t;
//     }
//     r(n,m+1,a);
//  }
//  else if(n>0){
//      r(n-1,0,a);
//  }
//  else{
//      for(int i=0;i<10;i++){
//          cout<<a[i]<<" ";
//      }
//  }
// }
// int main(){
// int a[10]={10,9,8,7,6,5,4,3,2,1};
// r(10,0,a);
// return 0;
// }
// """ 
// #include<iostream>
// using namespace std;
// void r(int n,int m,int o,int *c){
//     if(n==0){
//         return;
//     }
//     else if (m<n){
//          if (c[m] > c[o]) {
//             o = m;
//         }
//          r(n,m+1,o,c);
//     }
//     else{
//         swap(c[n-1],c[o]);
//         r(n-1,0,0,c);
//     }
// }
// int main(){
//     int a[10]={11,2,36,4,51,6,73,8,90,10};
//     r(10,0,0,a);
//     for(int i=0;i<10;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }"""
#include <iostream>
using namespace std;
void bubbble_sort(int n,int m,int *c){
    // o(n^2)
    if(m<n){
        if(c[m]>c[m+1]){
            std::swap(c[m],c[m+1]);
        }
        bubbble_sort(n,m+1,c);
    }
    else if(n>0){
        bubbble_sort(n-1,0,c);
    }
    else{
        for(int i=0;i<10;i++){
            cout<<c[i]<<" ";
        }
    }
}
void selection_sort(int n,int m,int o,int *c){
    // o(n^2)
    if(n==0){
        return;
    }
    else if (m<n){
         if (c[m] > c[o]) {
            o = m;
        }
         selection_sort(n,m+1,o,c);
    }
    else{
        swap(c[n-1],c[o]);
        selection_sort(n-1,0,0,c);
    }
}
int* merge(int* left, int leftSize, int* right, int rightSize) {
    int* result = new int[leftSize + rightSize];
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] < right[j]) {
            result[k++] = left[i++];
        } else {
            result[k++] = right[j++];
        }
    }

    while (i < leftSize) {
        result[k++] = left[i++];
    }

    while (j < rightSize) {
        result[k++] = right[j++];
    }

    return result;
}

int* merge_Sort(int* arr, int start, int end) {
    // nlogn
    if (start == end) {
        int* singleElement = new int[1];
        singleElement[0] = arr[start];
        return singleElement;
    }

    int mid = (start + end) / 2;

    // Recursively split the array into left and right halves
    int* left = merge_Sort(arr, start, mid);
    int* right = merge_Sort(arr, mid + 1, end);

    // Merge the sorted halves
    int* result = merge(left, mid - start + 1, right, end - mid);

    // Free the memory of the temporary arrays
    delete[] left;
    delete[] right;

    return result;
}

void quick_sort(int *arr, int start, int end) {
    if (start >= end) {
        return;  // Base case: If the array has 1 or no elements, it's already sorted
    }

    int s = start;
    int e = end;
    int pivot = arr[(s + e) / 2];  // Choose the middle element as the pivot

    // Partition the array around the pivot
    while (s <= e) {
        while (arr[s] < pivot) {
            s++;
        }
        while (arr[e] > pivot) {
            e--;
        }
        if (s <= e) {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }

    // Recursively sort the two halves
    if (start < e) {
        quick_sort(arr, start, e);  // Sort the left half
    }
    if (s < end) {
        quick_sort(arr, s, end);    // Sort the right half
    }
}
void skip(string &a){
    static string b="";
    static int i=0;
    if(i >= a.length()){
     return;
    }
     else if(a[i]=='a'){
            i++;
            skip(a);
     }
     else{
            b+=a[i];
            i++;
            skip(a);
     }
    a=b;
}
#include<string>
void skip_string(string &a,string &b){
    if(a.length()==0){
         return;
    }
    
   if(a.substr(0,5)=="apple"){
    a=a.substr(5);
    skip_string(a,b);
   }
   else{
      b+=a[0];
        a=a.substr(1);
        skip_string(a,b);
   }
}
void substring(string a,string b){
    if (b.length() == 0) {
        cout << a << endl;  // Print the subsequence
        return;
    }
    char c=b[0];
    substring(a+c,b.substr(1));
    substring(a,b.substr(1));
}
void substring_ascii(string a,string b){
    if (b.length() == 0) {
        cout << a << endl;  // Print the subsequence
        return;
    }
    char c=b[0];
    substring_ascii(a+c,b.substr(1));
    substring_ascii(a+c,b.substr(1));
    substring_ascii(a+to_string(c+0),b.substr(1));
}
void dice(string a,int b){
    if(b==0){
        cout<<a<<endl;
        return;
    }
    for(int i=1;i<=6;i++){
        if (b - i >= 0) {  // Ensure the remaining sum doesn't go below 0
            dice(a + to_string(i), b - i);
        }
    }

}
int main() {
    int a[10] = {11, 2, 36, 4, 51, 6, 73, 8, 90, 10};
    int n = sizeof(a) / sizeof(a[0]);
    string s="ab";
    dice("",4);
   
   
    return 0;
}
 // substring_ascii("",s);
    // string b="";
    // skip_string(s,b);
    // Sort the array
    // quick_sort(a, 0, n - 1);

    // Print the sorted array
    // for (int i = 0; i < n; i++) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // cout<<b;