#include<stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(b%a==0){
        printf("%d\n",a+b);
    }else{
        printf("%d\n",b-a);
    }
    return 0;
}