#include <stdio.h>
#include <stdbool.h>

bool linearsearch(int ar[], int size, int element){
    int i;
    for(i = 0; i<size; i++)
        if(ar[i] == element)
            return true;
    return false;
}

int main(){
    int size = 7, ar[] = {1,2,3,4,6,7,8}, element = 11;
    if(linearsearch(ar,size,element))
        printf("Found.");
    else
        printf("Not found.");
    return 0;
}
