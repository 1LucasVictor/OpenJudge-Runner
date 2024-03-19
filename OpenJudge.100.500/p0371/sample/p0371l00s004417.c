#include <stdio.h>

int main(void)
{
 int i,n,min,max,a[10000];
 long long sum;

 scanf("%d",&n);

 for(i=0;i<n;i++){
   scanf("%d",&a[i]);
 }

 min=a[0];
 max=a[0];
 sum=a[0];

 for(i=1;i<n;i++){
   if(a[i]<min){
       min=a[i];
   }else if(a[i]>max){
       max=a[i];
   }
   sum+=a[i];
 }

 printf("%d %d %lld\n",min,max,sum);

 return 0;
}