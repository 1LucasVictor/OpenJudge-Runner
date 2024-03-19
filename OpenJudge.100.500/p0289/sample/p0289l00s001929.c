#include<stdio.h>
 
int gcd(int*, int*);
 
int main(void) {
    int x, y, result;
    scanf("%d%d",&x,&y);
     
    if(x>=y) result = gcd(&x, &y);
    else result = gcd(&y, &x);
     
    printf("%d\n", result);
    return 0;
}
 
int gcd(int *x, int *y) {
    int ret, mod;
     
    if(*y==0) ret= *x;
    else {
        mod = *x % *y;
        ret = gcd(y, &mod);
    }
    return ret;
}
