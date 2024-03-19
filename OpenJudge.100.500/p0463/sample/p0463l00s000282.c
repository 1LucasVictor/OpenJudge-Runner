#include<stdio.h>
 int main(void)
 {
     int N,s,t;

     scanf("%d",&N);

       s=N%100;
       t=s%10;

     if(t==2) printf("hon\n");
     if(t==4) printf("hon\n");
     if(t==5) printf("hon\n");
     if(t==7) printf("hon\n");
     if(t==9) printf("hon\n");

     if(t==0) printf("pon\n");
     if(t==1) printf("pon\n");
     if(t==6) printf("pon\n");
     if(t==8) printf("pon\n");

     if(t==3) printf("bon\n");

     return 0;
 }
