#include <stdio.h>

int main(){
    
    int x,y,w,h,r;
    int a,b;
    
    scanf("%d",&w);
    scanf("%d",&h);
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&r);
    
   if(x == 0){
       puts("No");
       return 0;
   }if(y == 0){
       puts("No");
       return 0;
   }if(h < 2 * r){
       puts("No");
       return 0;
   }if(w < 2 * r){
       puts("No");
       return 0;
   }if(x == h){
       puts("No");
       return 0;
   }if(y == w){
       puts("No");
       return 0;
   }if(h == y){
       puts("No");
       return 0;
   }if(w == x){
       puts("No");
       return 0;
   }
   
   puts("Yes");
    
    
    return 0;
}