#include <stdio.h>

void merge(int ar[], int start, int mid, int end){
    int i, p = start, q = mid+1, A[end-start+1];
    for(i = 0; i<end-start+1; i++){
        if(p>mid){
            A[i] = ar[q++];
        }else if(q>end){
            A[i] = ar[p++];
        }else if(ar[p]>ar[q]){
            A[i] = ar[q++];
        }else{
            A[i] = ar[p++];
        }
    }

    for(q = start, i = 0; q<=end; q++, i++){
        ar[q] = A[i];
    }

}

void mergesort(int ar[], int start, int end){
    if(start<end){
        int mid = (start+end)/2;
        mergesort(ar,start,mid);
        mergesort(ar,mid+1,end);
        merge(ar,start,mid,end);
    }
}

int main(){
     int size = 8, ar[] = {1,3,2,7,6,4,3,12};
    mergesort(ar, 0, size-1);
    int i;
    for(i = 0; i<size; i++)
        printf("%d ", ar[i]);

    return 0;


}
