#include<stdio.h>
int main()
{
int i,j=0;
scanf("%d",&i);
while(i>0)
{
j+=i%10;
i=i/10;
}
printf("%d",j);
}