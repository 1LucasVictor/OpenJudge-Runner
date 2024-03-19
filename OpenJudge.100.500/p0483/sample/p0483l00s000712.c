#include<stdio.h>
int main()
{
   char ara[3];
   int i,count=0;
   scanf("%s",&ara);
   int len = strlen(ara);
   for(i=0;i<len;i++)
   {
       if(ara[i]==55)
       {
           count++;
       }
   }
   if(count>=1)
    printf("Yes");
   else
    printf("No");
    return 0;
}
