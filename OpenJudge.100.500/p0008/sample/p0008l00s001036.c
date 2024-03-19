#include <stdio.h>

int main(void)
{
  int i,j,k,a,b,c;
  int d=0,e=0,f=0;

 scanf("%d" , &a);
 scanf("%d" , &b);
 scanf("%d" , &c);

for(i=1;i<=a;i++)
{
k=0;
for(j=1;j<=i;j++)
{
if(i%j==0) k++;
}

if(k==2) { 
++d; 
}
}

for(i=1;i<=b;i++)
{
k=0;
for(j=1;j<=i;j++)
{
if(i%j==0) k++;
}

if(k==2) { 
++e; 
}
}

for(i=1;i<=c;i++)
{
k=0;
for(j=1;j<=i;j++)
{
if(i%j==0) k++;
}

if(k==2) { 
++f; 
}
}

printf("%d\n",d); 
printf("%d\n",e); 
printf("%d\n",f); 

return 0;
}