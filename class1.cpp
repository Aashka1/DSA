#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
// Function to heapify a subtree with the root at given index
void maxHeapify(int arr[], int n, int i) {
    int largest = i; // Initialize the largest as the root
    int left = 2 * i + 1; // Left child
    int right = 2 * i + 2; // Right child

    // If the left child is larger than the root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If the right child is larger than the largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If the largest element is not the root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected subtree
        maxHeapify(arr, n, largest);
    }
}
void Delete(){

}

int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Build a max heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }

    cout << "Max heap array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
