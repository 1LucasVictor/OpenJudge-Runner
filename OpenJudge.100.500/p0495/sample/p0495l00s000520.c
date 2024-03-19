#include <stdio.h>

int main()
{
   char a,b,c;
   scanf("%c %c %c",&a,&b,&c);
   if(a==b&&a==c){
       puts("No");
   }
   else {
       puts("Yes");
   }

    return 0;
}