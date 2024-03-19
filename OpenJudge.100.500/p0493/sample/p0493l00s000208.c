#include<stdio.h>

int main(void){
int money,fun,b,s;
(void)scanf("%d",&money);
b=money/500;
if(b>0)
money=money-500*b;
s=money/5;
fun=1000*b+5*s;
printf("%d\n",fun);
return 0;
}