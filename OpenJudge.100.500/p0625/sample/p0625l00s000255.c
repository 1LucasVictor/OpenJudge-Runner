#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=0, b=0;
    scanf("%d %d",&a, &b);
    
    
    if ( a >= b && a-b > 1){

      printf(":(\n");
    }
    else if( b > a && b-a > 1){
      printf(":(\n");

    }
    else{printf("Yay!\n");}


return 0;}