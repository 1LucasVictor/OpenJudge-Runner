#include <stdio.h>
#include <stdlib.h>
int main(void){
    // Your code here!
    int x, y,z=0, kaunnto = 0;
    scanf("%d%d", &x, &y);
   int turu = x, kame=0;
   for(int i=0;i<=x;i++){
       z = turu*2 + kame*4;
       if(z==y){
           printf("Yes");
           kaunnto = 1;
       }
       turu = turu-1;
       kame = kame+1;
   }
   if(kaunnto==0){
       printf("No");
   }
    return 0;
    
}
