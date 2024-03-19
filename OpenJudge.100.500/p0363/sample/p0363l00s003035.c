#include<stdio.h>

int main(void)
{

   int i,j,tmp;
   
   int number[100];
   
   for(i=0;i<3;++i){
      scanf("%d", &number[i]);
      }
   
   for(i=0;i<3;++i){
      for(j=i+1;j<3;++j){
         if(number[i]>number[j]){
            tmp = number[i];
            number[i] = number[j];
            number[j] = tmp;
      }}}
         
   i = 0;
	
      printf("%d %d %d\n", number[i],number[i+1],number[i+2]);
   
   return 0;
}
