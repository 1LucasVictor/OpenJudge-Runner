#include<stdio.h>
int main(){
int a,b,c;
char op;
while(1){
scanf("%d %c %d",&a,&op,&b);
if(op=='+') c = a + b;
if(op=='-') c = a - b;
if(op=='*') c = a * b;
if(op=='/') c = a / b;
if(op=='?') break;
printf("%d\n",c);
}
return 0;
}