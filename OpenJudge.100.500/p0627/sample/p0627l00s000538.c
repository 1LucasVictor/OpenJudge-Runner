#include <stdio.h>
int main()
{
   int a,b,c[4],i,temp=0;
   scanf("%d %d",&a,&b);
   c[0]=a+b;
   c[1]=a-b;
   c[2]=a*b;
   if(c[0]>c[1]&&c[0]>c[2]){
     printf("%d\n",c[0]);
   }
   else if(c[2]>c[0]&&c[2]>c[1]){
    printf("%d\n",c[2]);
   }
   else{
    printf("%d\n",c[1]);
   }
   return 0;
   }
