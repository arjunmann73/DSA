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

void initial_array(int ar[], int size1, int element){
    int i;
    for(i = 0; i<=size1; i++)
        ar[i] = element;
}

int dynamic_bottomup(int p[], int n){
    int r[n+1];
    initial_array(r,n+1,-1);
    r[0] = 0;
    int q,i,j;
    for(i = 1; i<=n; i++)
    {
        q = INT_MIN;
        for(j = 1; j<=i; j++){
            q = maxfunc(q,p[j] + r[i-j]);
        }
        r[i] = q;
    }
    return r[n];
}

int main(){
    int n, p[100],i;
    inputint(n);
    for_i(i,1,n+1)
        inputint(p[i]);

    printf("%d", dynamic_bottomup(p,n));
    return 0;
}




