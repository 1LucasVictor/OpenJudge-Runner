#include<stdio.h>
 
int main(void){

    char str[100];     			
    char *p;                     

    scanf("%s",str);
    p = &str[0];                
    while (*p != '\0')              
        p++;                          
    while (--p >= str){                   
        putchar(*p);
   }             
    printf("\n");
    return 0;
}