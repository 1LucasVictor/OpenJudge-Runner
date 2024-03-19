#include<stdio.h>
int main(void){
int a,b,c;
scanf("%d",&a);
b=a/3600;
a=a-b*3600;
c=a/60;
a=a-c*60;
printf("%d:%d:%d\n",b,c,a);
return 0;
}

