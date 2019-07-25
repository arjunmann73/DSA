#include <stdio.h>
#define inputint(i) scanf("%d", &i)
#define inputdbl(i) scanf("%lf", &i)
#define inputlli(i) scanf("%lld", &i)
#define for_i(i,a,b) for(i = a; i<b; i++)
#define lli long long int
#define flush scanf("\n")

int func(int a){
    return (2*a*a - 12*a + 7);
}

int main(){
    double n, l, r, i;
    inputdbl(n);
    while(n--){
        inputdbl(l); inputdbl(r);
        for_i(i, 0, 100){
            int l1 = (2*l + r)/3.0;
            int l2 = (l + 2*r)/3;
            if(func(l1)>func(l2))
                l = l1;
            else
                r = l2;
        }
        printf("%lf", func(l));
    }

    return 0;
}

