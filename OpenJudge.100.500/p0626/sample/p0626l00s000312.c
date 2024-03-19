#include <stdio.h>
#include <math.h>

int main(){
    int d,n;
    scanf("%d%d",&d,&n);
    printf("%d",d?n*(int)pow(100,d):n);
    return 0;
}