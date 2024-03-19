#include<stdio.h>
int main()
{
int k,a,b,s,i;
scanf("%d%d%d",&k,&a,&b);
if(k>=1 && k<=1000 && a>=1 && a<=1000 && b>=1 && b<=1000)
{s=0;
for(i=a;i<=b;i=i+1)
{s=s+i;
if(s%k==0)
break;                        
}
if(s%k==0){printf("OK\n");}
else
{printf("NG\n");}     
 }
return 0;    
}