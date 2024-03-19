#include<stdio.h>
int main(void){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        int num=log10(a+b)+1;
        printf("%d",num);
    }
return 0;
}