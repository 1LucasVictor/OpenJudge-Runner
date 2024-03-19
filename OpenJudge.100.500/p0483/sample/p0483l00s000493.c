#include<stdio.h>
int main()
 {

   int f,i;
   scanf("%d", &i);
   for(i; i!=0; i=i/10)
    {
      f=i%10;
       {
         if (f==7)
          {
            printf("Yes");
            break;
          }
         else
          {
            printf("No");
            break;
          }
       }
    }
  return 0;
 }
