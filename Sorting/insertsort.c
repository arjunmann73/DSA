#include <stdio.h>
#include "swap.h"

void insertsort(int size, int ar[]){
    int i, j;
    for(i = 1; i<size; i++){

        for(j = i; j>0; j--){
            if(ar[j]<ar[j-1])
                swap(&ar[j], &ar[j-1]);
            else
                break;
        }
    }
}

int main(){
    int size = 8, ar[] = {11,3,2,7,6,4,3,12};
    insertsort(size, ar);
    int i;
    for(i = 0; i<size; i++)
        printf("%d ", ar[i]);

    return 0;
}
