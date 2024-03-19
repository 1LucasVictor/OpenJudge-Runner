#include<stdio.h>
int main(void){
    int a,b,c,k;
    scanf("%d%d%d%d",&a,&b,&c,&k);
    if(k<=a){
        printf("%d",k);
    }
    if(k>=a&&k<=a+b){
        printf("%d",a);
    }
    else{
        printf("%d",a-c);
    }
    
    return 0;
}