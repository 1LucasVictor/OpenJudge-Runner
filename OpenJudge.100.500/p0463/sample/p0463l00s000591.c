#include<stdio.h>

int main(void){

int N;

scanf("%d",&N);

N=N%10;

if(N==2||N==4||N==5||N==7||N==9){printf("hon");}
else if(N==0||N==1||N==6||N==8){printf("pon");}
else if(N==3){printf("bon");}

return 0;
}