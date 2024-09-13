//introduction linked list (the data should not at continous location it stores the refrece or pointer of each other)
/*
Linked Lists are linear or sequential data structures 
in which elements are stored at non-contiguous memory locations and are linked to each other using pointers,no nedd to pre-allocate space.
Each element in a linked list consists of two parts:
Data: This part stores the data value of the node. That is the information to be stored at the current node.
Next Pointer: This is the pointer variable or any other variable which stores the address of the next node in the memory.
    |     head        |             | 
            |             |             | 
        +---+-----+     +----+----+     +----+-----+ 
        | A  |    | ---> | B  |   | --->| C | Null | 
        +---+-----+     +----+----+     +----+----+ 
        data
Advantages of Linked Lists over Arrays: Arrays can be used to store linear data of similar types, but arrays have the following limitations:
The size of the arrays is fixed, so we must know the upper limit on the number of elements in advance. Also, generally, the allocated memory is equal to the upper limit irrespective of the usage. On the other hand, linked lists are dynamic and the size of the linked list can be incremented or decremented during runtime.
Inserting a new element in an array of elements is expensive, because a room has to be created for the new elements, and to create room, existing elements have to shift.

For example, in a system, if we maintain a sorted list of IDs in an array id[].
id[] = [1000, 1010, 1050, 2000, 2040].
And if we want to insert a new ID 1005, then to maintain the sorted order, we have to move all the elements after 1000 (excluding 1000). Deletion is also expensive with arrays unless some special techniques are used. For example, to delete 1010 in id[], everything after 1010 has to be moved.

On the other hand, nodes in linked lists can be inserted or deleted without any shift operation and is efficient than that of arrays.

Disadvantages of Linked Lists:
Random access is not allowed in Linked Lists. We have to access elements sequentially starting from the first node. So, we cannot do a binary search with linked lists efficiently with its default implementation. Therefore, lookup or search operation is costly in linked lists in comparison to arrays.
Extra memory space for a pointer is required with each element of the list.
Not cache-friendly. Since array elements are present at contiguous locations, there is a locality of reference which is not there in the case of linked lists.

*/