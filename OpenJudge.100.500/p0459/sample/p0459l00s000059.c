#include <stdio.h>
#include <stdlib.h>
int main(void){
    // Your code here!
    int x, y,z=0, kaunnto = 0;
    scanf("%d%d", &x, &y);
   
   for(int i=0;i<x;i++){
       x = x-i;
       z = x*2 + i*4;
       if(z==y){
           printf("Yes");
           kaunnto = 1;
       }
   }
   if(kaunnto==0){
       printf("No");
   }
    return 0;
    
}
