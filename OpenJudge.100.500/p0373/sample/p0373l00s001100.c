#include<stdio.h>
int main(){
int H,W,a[300],b[300],i=0,N=0;
scanf("%d %d",&a[0],&b[0]);
while(a[i]!=0||b[i]!=0)
{
N++;
i++;
scanf("%d %d",&a[i],&b[i]);
}
for(i=0;i<=N-1;i++)
{
   for(W=1;W<=b[i];W++)
   {
      printf("#");
   }
   printf("\n");
   for(H=2;H<=a[i]-1;H++)
    {
      printf("#");
      for(W=2;W<=b[i]-1;W++)
      {
         printf(".");
      }
     printf("#\n");
    }
   for(W=1;W<=b[i];W++)
   {
      printf("#");
   }
printf("\n");
printf("\n");
}
return 0;
}
