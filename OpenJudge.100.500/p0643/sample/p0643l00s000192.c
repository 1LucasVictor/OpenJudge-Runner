#include<stdio.h>
int main()
{
int a;
int b;
int c;

scanf("%d",&a);
scanf("%d",&b);

c=a*b;

if(c%2==1){
printf("Odd");
}else {
printf("Even");
}

return 0;
}