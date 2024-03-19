#include <stdio.h>
 void main(){
     int N,a;
     scanf("%ld",&N);
     a=N%10;
     if(a==3)
        printf("bon\n");
     else if(a==0||a==1||a==6||a==8)
        printf("pon\n");
     else
        printf("hon\n");
 }