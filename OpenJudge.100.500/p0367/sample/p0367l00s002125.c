#include<stdio.h>

int main(void){

int a,b,c,n,x;

n=0;

x=0;

scanf("%d %d %d",&a,&b,&c);

if(a>=1&&a<=10000&&b>=1&&b<=10000&&c>=1&&c<=10000){

for(a;a<=b;a++){

if(c%a==0){

x=x+1;

}

}

}

printf("%d\n",x);

return 0;

}