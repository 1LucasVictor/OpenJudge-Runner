#include <stdio.h>
int main(void){
     int a,b;
     char r;
     while(1){ 
          scanf("%d %c %d", &a ,&r, &b);      
           if ( r == '?' )   
            break; 
             if ( r == '+' ){       
                  printf("%d\n",a+b)
                  ;}
                   else if ( r == '-' ){
                       printf("%d\n",a-b)
                       ;}
                       else if ( r == '*' ){
                           printf("%d\n",a*b)
                           ;}
                           else if ( r == '/' ){
                               printf("%d\n",a/b)
                               ;}
                               }
                               return 0;}

