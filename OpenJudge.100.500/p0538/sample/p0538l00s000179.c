#include<stdio.h>
int main(void){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>9 || b>9){
        printf("%d",1);
        return 0;
    }        
    printf("%d",a*b);
    return 0;
}