#include<stdio.h>
#include<string.h>
int main()
{ char code[4];
 scanf("%s",&code);
 if(code[0]==code[1]||code[2]==code[1]||code[2]==code[3]) {
     printf("Bad");
   }
 else {
   printf("Good");       
   }
    
    
}
