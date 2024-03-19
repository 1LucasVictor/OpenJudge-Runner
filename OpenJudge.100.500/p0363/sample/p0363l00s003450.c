#include <stdio.h>
int main(void){
   int a,b,c;
   
   scanf("%d %d %d", &a, &b, &c);
   
   if(a<b){
       if(b<c){
           printf("%d %d %d\n", a, b, c);
       }
           else if(c<a){//a<b c<b
               printf("%d %d %d\n", c, a, b);
           }
           else{//a<c  c<b a<b
               printf("%d %d %D\n", a, c, b);
           }
}
       else if(a<c){//b<a 
           printf("%d %d %d\n", b, a, c);
       }
       else if(b<c){//b<a c<a
           printf("%d %d %d\n", b, c, a);
       }
       else{//b<a c<a c<b 
           printf("%d %d %d\n", c, b, a);
       }
    return 0;
}
    
   
