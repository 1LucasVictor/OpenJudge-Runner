#include<stdio.h>
 
int main() 
{
 
int S;
int h,m,s;
int a;
 
scanf("%d",&S);
 
a=S%3600;
h=(S-a)/3600;
 
s=a%60;
m=(a-s)/60;
 
printf("%d:%d:%d\n",h,m,s);
 
return 0;
 
}
