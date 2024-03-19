#include <stdio.h>
#include <string.h>

int main(void){
   char str1[200000],str2[200000];
   int i,n,t=0;
   scanf("%s%s",str1,str2);

   n=strlen(str1);
   for(i=0;i<n;i++)
      if(str1[i]!=str2[i]) t++;


   printf("%d\n",t);
}