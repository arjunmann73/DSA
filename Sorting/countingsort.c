#include <stdio.h>
#include "swap.h"


void countingsort(int ar[], int size){
    int max = MAX(ar,size);
    int aux[max+1], i, j;
    initial_array(aux, max+1, 0);
    for(i = 0; i<size; i++)
        aux[ar[i]]++;
    for(i = 0, j = 0; i<=max+1; i++){
        while(aux[i]!=0){
            ar[j++] = i;
            aux[i]--;
        }
    }
}

int main(){
     int size = 8, ar[] = {1,3,2,7,6,4,3,12};
    countingsort(ar, size);
    int i;
    for(i = 0; i<size; i++)
        printf("%d ", ar[i]);

    return 0;


}
