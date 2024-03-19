#include<stdio.h>
int main(){
   char a[5];
   scanf("%s",a);
   int i=0;
   for(;i<3 && a[i]!=a[i+1];i++);
  
   if(i==3) 
     printf("Good");
   else
     printf("Bad");
  
  return 0;
}