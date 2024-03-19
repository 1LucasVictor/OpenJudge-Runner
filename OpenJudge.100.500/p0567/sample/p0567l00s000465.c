#include<stdio.h>
int main()
{
   int A,B,C;
   scanf("%d%d%d",&A,&B,&C);
   if(C-A+B<0){
       printf("%d",0);
   }
   else{
   printf("%d",C-(A-B));
   }
return 0;
}