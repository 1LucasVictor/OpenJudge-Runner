#include<stdio.h>
int main(void)
{
 int hunNum,tenNum,oneNum;
 int s;
 int count = 0;
 
 scanf("%d",&s);
 
 if(s>=100){
   s = s - 100;
   count += 1;
 }
 if(s>=10){
   s = s-10;
   count += 1;
 }
 if(s>=1){
   s = s-1;
   count += 1;
 }
 
 printf("%d",count);
 
  
  
  
 return 0; 
}