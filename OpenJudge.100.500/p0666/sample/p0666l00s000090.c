#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   long d, a, b;
   char *s1, *s2, *s3;
   char s[100];

   fgets(s,100,stdin);

   s1 = strtok(s, " ");
   s2 = strtok(NULL, " ");
   s3 = strtok(NULL, " ");

   d = atol(s1);
   a = atol(s2);
   b = atol(s3);

   if(a >= b){
       printf("delicious");
   }else if(b - a <= d){
       printf("safe");
   }else{
       printf("dangerous");
   }

   return 0;
}