#include<stdio.h>
int main()
{
int n,i,t,min,max;
long long int sum;
scanf("%d",&n);
min=1000000; max=-1000000;
sum=0;
 
for(i=0;i<n;i++){
scanf("%d",&t);
if(min>t) min=t;
if(max<t) max=t;
sum+=t;
}
printf("%d %d %lld\n",min,max,sum);
return 0;
}
 
 
  