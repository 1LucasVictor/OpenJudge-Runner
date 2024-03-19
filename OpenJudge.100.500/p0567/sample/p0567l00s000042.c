#include<stdio.h>
int main(void){
    int a=0,b=0,c=0;
    int capa=0;

    scanf("%d %d %d",&a,&b,&c);

    capa=a-b;
    if(capa<=c){
        printf("%d",c-capa);
    }else{
        printf("0");
    }
    return 0;
}