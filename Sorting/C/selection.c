#include <stdio.h>
#include "swap.h"


void selsort(int size, int ar[]){
    int i, j;
    for(i = 0; i<size-1; i++){
        int index = 0;
        for(j = 0; j<size-i; j++){
            if(ar[j]>ar[index])
                index = j;
        }
        swap(&ar[index], &ar[size-1-i]);
    }
}

int main(){
    int size = 8, ar[] = {11,3,2,7,6,4,3,12};
    selsort(size, ar);
    int i;
    for(i = 0; i<size; i++)
        printf("%d ", ar[i]);

    return 0;
}
