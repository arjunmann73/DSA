#include <stdio.h>
#include <limits.h>

#define max(a,b) (a>b)?a:b
int MAX(a,b,c){
    if(a>=b && a>=c)
        return a;
    if(b>=a && b>=c)
        return b;
    if(c>=a && c>=b)
        return c;
}

int maxsum(int ar[100001], int l, int r){
    if(l == r)
        return INT_MIN;
    else{
        int mid = (l+r)/2;
        int i, sum_left = 0, sum_right = 0, total_sum, left_temp = 0, right_temp = 0;
        for(i = mid; i>=l; i--){
            left_temp += ar[i];
            if(left_temp > sum_left)
                sum_left = left_temp;
        }
        for(i = mid+1; i<=r; i++){
            right_temp += ar[i];
            if(right_temp > sum_right)
                sum_right = right_temp;
        }
        total_sum = sum_left + sum_right;
        return MAX(maxsum(ar, l, mid), total_sum, maxsum(ar, mid+1, r));
    }
}

int main(){

    int n, ar[100001], i, j, globalsum = 0, tempsum;
    scanf("%d", &n);
    for(i = 0; i<n; i++)
        scanf("%d", &ar[i]);

    printf("%d", maxsum(ar, 0, n-1));
    return 0;
}
