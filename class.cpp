#include <iostream>
#include <vector>

using namespace std;

// Function to heapify a subtree rooted at given index
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left_child = 2 * i + 1;
    int right_child = 2 * i + 2;

    // Check if left child exists and is greater than the root
    if (left_child < n && arr[left_child] > arr[largest])
        largest = left_child;

    // Check if right child exists and is greater than the root
    if (right_child < n && arr[right_child] > arr[largest])
        largest = right_child;

    // Swap the root if needed
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Main function to perform heap sort
void heap_sort(vector<int>& arr) {
    int n = arr.size();

    // Build a max heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // Extract elements one by one
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

// Function to print an array
void printArray(const vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}

// Example usage
int main() {
    vector<int> unsortedArray = {12, 11, 13, 5, 6, 7};

    cout << "Unsorted array: ";
    printArray(unsortedArray);

    heap_sort(unsortedArray);

    cout << "Sorted array: ";
    printArray(unsortedArray);

    return 0;
}
