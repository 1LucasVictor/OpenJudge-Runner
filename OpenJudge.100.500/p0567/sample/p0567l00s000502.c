#include <stdio.h>
#include <math.h>
#include <stdbool.h>
typedef long long int lli;
#define rept(x, s, n) for (int x = s; x < n; x++)
int main(void)
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(C-A+B>0){
    printf("%d",C-A+B);
    }else{
    printf("0");
    }
    return 0;
}