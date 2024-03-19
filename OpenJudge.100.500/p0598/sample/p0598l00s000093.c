#include<stdio.h>

int  main(void){

int A,B;
int answer;
scanf("%d",&A);
scanf("%d",&B);

if(B%A){answer=B-A;}
else{answer=A+B;}
printf("%d",answer);
return 0;

}