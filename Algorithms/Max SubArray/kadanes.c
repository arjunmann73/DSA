#include <stdio.h>
#include <limits.h>

int main(){

    int n, ar[100001], i, j, maxsofar = 0, maxendinghere = 0;
    scanf("%d", &n);
    for(i = 0; i<n; i++)
        scanf("%d", &ar[i]);
    int flag = 0;
    for(i = 0; i<n; i++)
        if(ar[i]>0){
            flag = 1;
            break;
        }
    if(flag == 0){
        for(i = 0; i<n; i++){
            if(i == 0)
                maxsofar = ar[i];
            if(maxsofar < ar[i])
                maxsofar = ar[i];
        }
    }
    else{
        for(i = 0; i<n; i++){
            maxendinghere += ar[i];
            if(maxendinghere < 0)
                maxendinghere = 0;
            if(maxendinghere > maxsofar)
                maxsofar = maxendinghere;
        }

    }
    printf("%d", maxsofar);
    return 0;
}
