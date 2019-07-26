#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>
#define inputint(i) scanf("%d", &i)
#define inputlli(i) scanf("%lld", &i)
#define for_i(i,a,b) for(i = a; i<b; i++)
#define lli long long int
#define flush scanf("\n")

int maxfunc(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int cutrod(int p[], int n){
    if(n == 0)
        return 0;
    int q = INT_MIN, j;
    for(j=1; j<=n; j++)
        q = maxfunc(q,p[j]+cutrod(p,n-j));
    return q;
}

int main(){
    int n, p[100],i;
    inputint(n);
    for_i(i,1,n+1)
        inputint(p[i]);

    printf("%d", cutrod(p,n));
    return 0;
}


