#include<stdio.h>
main()
{
   int A,B,C;
   scanf("%d %d %d",&A,&B,&C);
   if (A==5 && B==5 && C==7)
   {
       printf("YES\n");
   }
   else if (A==5 && C==5  &&B==7)
   {
       printf("YES\n");
   }
   else if (B==5 &&C==5 && A==7)
   {
       printf("YES\n");
   }
   else
   {
       printf("NO");
   }
}   