#include <stdio.h>

int main(void){
   char str[21];
   int i,j;
   int temp=-1;
   
   for(i=0;scanf("%c",&str[i])!=EOF;i++){
       temp+=1;
   }
   for(j=temp;j>=0;j--) {
       printf("%c",str[j]);
   }
   printf("\n");
   
   return 0;
}

