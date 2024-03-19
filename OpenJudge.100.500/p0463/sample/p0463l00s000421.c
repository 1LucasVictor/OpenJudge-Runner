#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%10==3){
        printf("bon");
        return 0;
    }
    else if(n%10==0 || n%10==1 || n%10==6 || n%10==8){
        printf("pon");
        return 0;
    }
    printf("hon");
    return 0;
}