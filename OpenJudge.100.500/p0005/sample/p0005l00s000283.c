#include <stdio.h>

int main(void){
   char str[21];
   int i,j;
   
   for(i=0;scanf("%c",&str[i])!=EOF;i++);
   for(j=i-1;j>=0;j--) printf("%c",str[j]);
   putchar('\n');
   
   return 0;
}

