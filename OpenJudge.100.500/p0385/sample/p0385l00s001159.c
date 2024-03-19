#include<stdio.h>
int main(void){
   char x[1000];
   int sum;
   int i;
   int b;

   b=10;
   scanf("%s",&x);
   while(x[0]!='0'){
      sum=0;
      for(i=0;x[i]!='\0';i++){
         sum += x[i]-'0';
      }
      printf("%d\n",sum);
      scanf("%s",&x);
   }
   return 0;
}