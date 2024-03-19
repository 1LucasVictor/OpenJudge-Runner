#include<stdio.h>
int main()
{
int N,count=0;
scanf("%d",&N);
while(N>0)
  {
   if(N%10==7)
   {
   count=count+1;  
   break;
   }
   N=N/10;
  }
if(count!=0)
printf("Yes\n");
else
printf("No\n");
return 0;
}