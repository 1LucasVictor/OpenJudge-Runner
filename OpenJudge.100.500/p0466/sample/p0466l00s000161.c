#include<stdio.h>

int main()
{
   char s1[20], s2[20];
   scanf("%s\n%s", s1, s2);

   for (int i = 0; s1[i]; ++i)
   {
      if(s1[i]!=s2[i]){
         printf("No\n");
         return 0;
      }
   }
   // int l1=0, l2=0;
   // while(s1[l1]) l1++;
   // while(s2[l2]) l2++;
   // if(l1+1==l2) 
   printf("Yes\n");
   //else printf("No\n");

   return 0;
}

