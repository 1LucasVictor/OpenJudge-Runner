#include<stdio.h>

int main(void){
    int x,gh=0,g=0,z;
    
    scanf("%d",&x);
    while(x>5){
        while(x>=500){
            gh++;
            x-=500;
        }
        x-=5;
        if(x>0){
            g++;
        }
    }
    z=gh*1000+g*5;
    printf("%d\n",z);
    return 0;
}