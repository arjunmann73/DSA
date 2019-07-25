#include <stdio.h>
#include "swap.h"

void bubblesort(int size, int ar[]){
    int i,j;
    for(i = 0; i<size; i++){
        for(j = 0; j<size-i-1; j++)
        {
            if(ar[j]>ar[j+1]){
                swap(&ar[j], &ar[j+1]);
            }
        }
    }
}

int main(){
    int size = 8, ar[] = {11,3,2,7,6,4,3,12};
    bubblesort(size, ar);
    int i;
    for(i = 0; i<size; i++)
        printf("%d ", ar[i]);

    return 0;
}
