#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    int x,ans=0;
    scanf("%d",&x);
    while (x>=500){
        x-=500;
        ans+=1000;
    }
    while (x>=5){
        x-=5;
        ans+=5;
    }
    printf("%d",ans);
    return 0;
}