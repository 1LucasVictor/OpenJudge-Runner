#include <stdio.h>
int main(void){
    // Your code here!
   int f[45],i;
  
   f[0]=f[1]=1;
   for(i=2;i<45;i++)
   f[i]=f[i-1]+f[i-2];
    scanf("%d",&i);
   printf("%d\n",f[i]);
   
   return 0;
}
   
   
   
