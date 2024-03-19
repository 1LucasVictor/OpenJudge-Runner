#include<stdio.h>
int main(void)
{
int a,b,c,tmp;
scanf("%d %d\n" ,&a,&b);


if(a<b){
tmp = a;
a = b;
b = tmp;
}
c = a % b;
while(c != 0){
a = b;
b = c;
c = a % b;
}
printf("%d\n",b);
return 0;
}