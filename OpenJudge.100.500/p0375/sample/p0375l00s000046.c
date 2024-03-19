#include<stdio.h>
 int main()
{
 int n,i,x;
 scanf("%d",&n);
 for(i=1;i<=n;i++){
         x=i;
         if(i%3==0||i%10==3||i/10%10==3||i/100%10==3||i/1000==3)
               printf(" %d",i);
                   }
  printf("\n");
 return 0;

}
               

