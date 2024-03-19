#include<stdio.h>
int main(void){
    int a,b,c,k;
    scanf("%d%d%d%d",&a,&b,&c,&k);
    if(k<=a){
        printf("%d",k);
        return 0;
    }
    if(k>a&&k<=a+b){
        printf("%d",a);
        return 0;
    }
    else{
        printf("%d",a-c);
        return 0;
    }
    
}