#include <stdio.h>
#define inputint(i) scanf("%d", &i)
#define inputlli(i) scanf("%lld", &i)
#define for_i(i,a,b) for(i = a; i<b; i++)
#define lli long long int

int binarysearch(int ar[], int size, int element){
    int mid;
    int start = 0, end = size-1;
    while(start<=end){
        mid = (start+end);
        if(ar[mid] == element)
            return mid;
        else if(ar[mid]>element)
            end = mid-1;
        else
            start = mid+1;
    }
    return -1;
}

int main(){
    int size = 7, ar[] = {1,2,3,4,5,6,7}, element = 9;
    printf("%d", binarysearch(ar,size,element));
    return 0;
}

