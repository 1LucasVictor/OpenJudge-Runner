#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, x;
    scanf("%d%d%d",&a,&b,&x);
    if(x<a || a+b <x){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
    return 0;
}