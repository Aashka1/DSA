#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) : data(x), next(nullptr) {}
};

class MyQueue {
private:
    Node* front;
    Node* rear;

public:
    MyQueue() : front(nullptr), rear(nullptr) {}

    void enqueue(int x) {
        Node* newNode = new Node(x);
        if (newNode == nullptr) {
            cout << "Memory allocation failed. Cannot enqueue element " << x << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow! Cannot dequeue from an empty queue." << endl;
            return -1; // Assuming -1 is not a valid element in the queue
        }

        int result = front->data;
        Node* temp = front;
        front = front->next;

        if (front == nullptr) {
            rear = nullptr; // Reset rear if the queue becomes empty
        }

        delete temp;
        return result;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    MyQueue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    myQueue.display();

    cout << "Dequeued element: " << myQueue.dequeue() << endl;

    myQueue.display();

    return 0;
}
