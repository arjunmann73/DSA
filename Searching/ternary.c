#include <stdio.h>
#define inputint(i) scanf("%d", &i)
#define inputlli(i) scanf("%lld", &i)
#define for_i(i,a,b) for(i = a; i<b; i++)
#define lli long long int
#define flush scanf("\n")

int ternarysearch(int ar[], int begin, int end, int element){
    if(end>=1){
        int mid1 = begin + (end-1)/3;
        int mid2 = end - (end-1)/3;
        if(ar[mid1] == element)
            return mid1;
        else if(ar[mid2] == element)
            return mid2;
        else if(ar[mid1] > element)
            return ternarysearch(ar, begin, mid1-1, element);
        else if(ar[mid2] > element)
            return ternarysearch(ar, mid1+1, mid2-1, element);
        else
            return ternarysearch(ar, mid2+1, end, element);
    }
    return -1;
}


int main(){
    int ar[] = {1,2,3,4,5,6,7}, element = 5;
    printf("%d", ternarysearch(ar, 0, 7, element));
    return 0;
}


/*

int ternary_search(int l,int r, int x)
{
    if(r>=l)
    {
        int mid1 = l + (r-l)/3;
        int mid2 = r -  (r-l)/3;
        if(ar[mid1] == x)
            return mid1;
        if(ar[mid2] == x)
            return mid2;
        if(x<ar[mid1])
            return ternary_search(l,mid1-1,x);
        else if(x>ar[mid2])
            return ternary_search(mid2+1,r,x);
        else
            return ternary_search(mid1+1,mid2-1,x);

    }
    return -1;
}
*/
