#include<stdio.h>

int main(void)
{
   int h,n,a[1000],i,s;
   s=0;
   scanf("%d%d",&h,&n);
   for(i=0; i<n; i++){
      scanf("%d",&a[i]);
      s+=a[i];
   }
   if(s>=h){printf("Yes\n");}
   else {printf("No\n");}
   return 0;
}
