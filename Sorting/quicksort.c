#include <stdio.h>
#include "swap.h"

int partition(int ar[], int start, int end){
    int i = start + 1, j;
    int piv = ar[start] ;
    for(j =start + 1; j <= end ; j++ )  {
          if ( ar[j]<piv) {
            swap(&ar[i],&ar[j]);
            i++;
        }
   }
   swap(&ar[start],&ar[i-1]);
   return i-1;
}
int random_partition(int ar[], int start, int end){
    int random = start + rand()%(end-start+1);
    swap(&ar[random], &ar[start]);
    return partition(ar, start, end);
}

void quicksort(int ar[], int start, int end){
    if(start<end){
        int piv = random_partition(ar, start, end);
        quicksort(ar, start, piv-1);
        quicksort(ar, piv+1, end);
    }
}


int main(){
    int size = 8, ar[] = {1,3,2,7,6,4,3,12};
    quicksort(ar, 0, size-1);
    int i;
    for(i = 0; i<size; i++)
        printf("%d ", ar[i]);

    return 0;


}

