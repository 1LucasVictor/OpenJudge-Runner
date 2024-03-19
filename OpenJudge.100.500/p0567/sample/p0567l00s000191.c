#include<stdio.h>

int main(void){

int a,b,c;
int d;

scanf("%d%d%d",&a,&b,&c);
d=a-b;

if(d>c)
printf("0");
else{
    printf("%d",c-d);
}

   
    

    return 0;
}