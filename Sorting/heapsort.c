#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define inputint(i) scanf("%d", &i)
#define inputlli(i) scanf("%lld", &i)
#define for_i(i,a,b) for(i = a; i<b; i++)
#define lli long long int
#define flush scanf("\n")

/*
Defining the relations between parent node and child nodes.
          0
        /   \
       9     4
 9 is defined as the left child and 4 as the right child.
 In an array = {0,9,4}
       (index)  1,2,3
*/

#define parent(i) i>>1
#define left(i) i<<1
#define right(i) ((i<<1) + 1)

/*
Swapping 2 elements using call by address
*/

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
Max_heapify is the method for converting a subtree of heap into a Max-heap.
Heapsort is based on this method.
*/

void Max_heapify(int A[], int i, int heap_size){
    int l = left(i);
    int r = right(i);
    int largest;
    if(l<=heap_size && A[l]>A[i])
        largest = l;
    else
        largest = i;
    if(r<=heap_size && A[r]>A[largest])
        largest = r;
    if(largest != i){
        swap(&A[i],&A[largest]);
        Max_heapify(A,largest,heap_size);
    }
}

/*
Min_heapify is the method of converting a subtree into a Min_heap.
Used to create priority queues along with some other functions.
*/

void Min_heapify(int A[], int i, int heap_size){
    int l = left(i);
    int r = right(i);
    int smallest;
    if(l<=heap_size && A[l]<A[i])
        smallest = l;
    else
        smallest = i;
    if(r<=heap_size, A[r]<A[smallest])
        smallest = r;
    if(smallest != i){
        swap(&A[i],&A[smallest]);
        Min_heapify(A,smallest,heap_size);
    }
}
/*
Creating a normal array into a Max heap using max_heapify in the bottom to top approach.
Apply the method max_heapify to all nodes apart from the leaf nodes, making each subtree a max heap ie. making the whole tree as a max heap.
*/

void build_maxheap(int A[], int len){
    int i;
    for(i = len/2; i>=1; i--)
        Max_heapify(A,i,len);
}


int main(){
    int A[100], size, heap_size, i;
    inputint(size);
    //printf("%d %d\n", left(i), right(i));

    for(i = 1; i<=size; i++) // input
        inputint(A[i]);
    heap_size = size; // initially, all the elements are a part of the heap

    build_maxheap(A,size); // setting the array as a max heap to begin with

    for(i = size; i>=2; i--){
        swap(&A[i], &A[1]); // isolating the root node at the end of the array
        heap_size--;    // deleting the isolated element of the array from the heap
        Max_heapify(A,1,heap_size);
    }

    for(i = 1; i<=size; i++)
        printf("%d ", A[i]);
    return 0;
}

