#include<stdio.h>
int main()
{
int a[3],f=0,s=0,i,t;
for(i=0;i<3;i++)
{
scanf("%d ",&a[i]);
if(a[i]==5)
f++;
else if(a[i]==7)
s++;
}
t=f+s;
if(t==3&&f==2&&s==1)
printf("YES");
else
printf("NO");
}