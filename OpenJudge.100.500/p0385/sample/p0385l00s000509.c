#include<stdio.h>

int main(){
int n,a,b,c;

while(1){
scanf("%d\n",&n);

if(n==0)break;
if(n!=1000){
a=n/100;
b=(n-100*a)/10;
c=n-(100*a+10*b);
printf("%d\n",a+b+c);
}else printf("1\n");
}
return 0;
}