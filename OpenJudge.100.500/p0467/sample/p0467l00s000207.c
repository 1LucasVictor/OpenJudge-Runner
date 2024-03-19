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
    if(a+b<k&&k<=a+b+c){
        printf("%d",2*a-b-k);
        return 0;
    }
    
}