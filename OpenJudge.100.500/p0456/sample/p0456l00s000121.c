
#include <stdio.h>

int main()
{
   char s1[500],s2[500];
   scanf("%s",s1);
   scanf("%s",s2);
   int count=0;
   for(int i=0;s1[i]!='\0';i++)
   {
       if(s1[i]!=s2[i])
       {
           count++;
       }
   }
printf("%d",count);
    return 0;
}
