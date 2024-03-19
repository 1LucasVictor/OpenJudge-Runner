#include<stdio.h>
int main(void){
int a,b;
char op;
do{
scanf("%d %[^ ] %d",&a,&op,&b);
if(0<=a&&a<=20000&&0<=b&&b<=20000){
if(op=='+')
printf("%d\n",a+b);
else if(op=='-')
printf("%d\n",a-b);
else if(op=='*')
printf("%d\n",a*b);
else if(op=='/'&&b!=0)
printf("%d\n",a/b);
}
}while(op!='?');
return 0;
}