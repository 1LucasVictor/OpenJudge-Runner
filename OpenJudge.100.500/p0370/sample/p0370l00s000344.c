#include<stdio.h>

int main(void){
int a,b;
char c;
while(1){
scanf("%d %c %d",&a,&c,&b);

if(c == '?')break;
if(c == '+')printf("%d",a+b);
if(c == '-')printf("%d",a-b);
if(c == '/')printf("%d",a/b);
if(c == '*')printf("%d",a*b);

printf("\n");
}
return 0;
}