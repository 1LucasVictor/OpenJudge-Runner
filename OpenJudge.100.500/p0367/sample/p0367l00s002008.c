#include<stdio.h>

int main()
{
int a,b,c,d=0,i;
scanf("%d %d %d",&a,&b,&c);
for(i=a;i<=b;i++){
if(c%i==0)d++;
}
printf("%d\n",d);
return 0;
}