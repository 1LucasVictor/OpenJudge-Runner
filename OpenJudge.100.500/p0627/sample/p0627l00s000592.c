#include <stdio.h>
int main()
{
   int a,b,c[3],i,temp=0;
   scanf("%d %d",&a,&b);
   c[0]=a+b;
   c[1]=a-b;
   c[2]=a*b;
   for(i=0;i<3;i++){
    if(c[i]>temp){
        temp=c[i];
    }
   }
   printf("%d\n",temp);
  return 0;
}
