#include<stdio.h>
int main(void){
  
  	int d=0;
  	int n=0;
  	
  	scanf("%d %d",&d,&n);
if((n>=1)&&(n<100)){
   switch(d){
      case 0:
        printf("%d",n);break;
      case 1:
        printf("%d",n);printf("00");break;
      case 2:
         printf("%d",n);printf("0000");break;
    }
}
if(n==100){   switch(d){
      case 0:
        printf("101");break;
      case 1:
        printf("10100");break;
      case 2:
         printf("1010000");break;
    }}
}
