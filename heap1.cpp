/*
binary heap=used in heap sort,to implemnt priority queue
1-min-heap
2-max-heap
*/
#include <iostream>
using namespace std;

class Minheap
{
private:
    int *a;
    int s;
    int ca;

public:
    Minheap(int c)
    {
        a = new int[c];
        s = 0;
        ca = c;
    }

    int left(int i)
    {
        return (2 * i + 1);
    }

    int right(int i)
    {
        return (2 * i + 2);
    }

    int parent(int i)
    {
        return (i - 1) / 2;
    }

    // You need to implement other methods such as insert, heapify, and extractMin.
};
