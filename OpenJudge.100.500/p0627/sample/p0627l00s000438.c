#include<stdio.h>
int main(void){
    int a,b,add,sub,mul;
    scanf("%d %d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    if(add>sub&&add>mul){
        printf("%d\n",add);
    }else if(sub>add&&sub>mul){
        printf("%d\n",sub);
    }else{
        printf("%d\n",mul);
    }
    return 0;
}



