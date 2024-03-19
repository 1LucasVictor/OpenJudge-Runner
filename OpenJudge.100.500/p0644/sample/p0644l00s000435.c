#include<stdio.h>
int main()
{
char a[3];
scanf("%s", a);
int count=0;
int i;
for(i=0;i<3;i++)
if(a[i]=='1')
count++;
printf("%d", count);
return 0;
}