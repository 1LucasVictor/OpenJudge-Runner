#include<stdio.h>

int main()
{
int N,remainder;
scanf("%d",&N);

remainder=N%10;

if(remainder==1){ 
printf("pon\n");}

else if(remainder==2){ 
printf("hon\n");}

else if(remainder==3){ 
printf("bon\n");}

else if(remainder==4){ 
printf("hon\n");}

else if(remainder==5){ 
printf("hon\n");}

else if(remainder==6){ 
printf("pon\n");}

else if(remainder==7){ 
printf("hon\n");}

else if(remainder==8){ 
printf("pon\n");}

else if(remainder==9){ 
printf("hon\n");}

else if(remainder==0){ 
printf("pon\n");}

    return 0;
}