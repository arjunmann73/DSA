#include <stdio.h>

int main(){

    int n, ar[100001], i, j, globalsum = 0, tempsum;
    scanf("%d", &n);
    for(i = 0; i<n; i++)
        scanf("%d", &ar[i]);

    for(i = 0; i<n; i++){
        tempsum = 0;
        for(j = i; j<n; j++){
                tempsum += ar[j];
        if(tempsum>globalsum)
            globalsum = tempsum;
        }
    }
    printf("%d", globalsum);

    return 0;
}
