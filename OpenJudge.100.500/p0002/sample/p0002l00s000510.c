#include <stdio.h>

int main(void){

   int l_num=0;
   int num1,num2,num3;
   int i=0;
   int check=0;
   
   scanf("%d", &l_num);
   
   while(i < l_num){
      scanf("%d %d %d", &num1, &num2, &num3);

      check = num1*num1 - num2*num2 -num3*num3;
      if(check == 0){
          puts("YES");
          i++;
          continue;
      }
      
      check = num2*num2 - num1*num1 -num3*num3;
      if(check == 0){
          puts("YES");
          i++;
          continue;
      }
      
      check = num3*num3 - num1*num1 -num2*num2;
      if(check == 0){
          puts("YES");
          i++;
          continue;
      }
      
      puts("NO");
      i++;
   }
   return 0;
}