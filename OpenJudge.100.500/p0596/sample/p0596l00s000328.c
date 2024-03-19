#include<stdio.h>

int main(void)
{
   int n, i, b, g;
   char s[100000];

   scanf("%s",s);

   b=0; g=0;
   for(i=0;s[i]=='0'||s[i]=='1';i++){
        if(s[i]=='0') b=b+1;
        else if(s[i]=='1') g=g+1;
   }

   if(b>g) printf("%d\n",g*2);
   else    printf("%d\n",b*2);

   return 0;
}