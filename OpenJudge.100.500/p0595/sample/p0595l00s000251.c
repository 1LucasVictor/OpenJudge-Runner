#include<stdio.h>
int main(void){
	int a,b,c,k,i;
  	int count;
  	count = 0;
  	while(1){
  	scanf("%d",&a);
  	scanf("%d",&b);
    scanf("%d",&k);
    	if (a >= 1 && a <= 100 && b >= 1 && b <= 100 && k >= 1){
      		break;
        }
    }
  if (a > b){
    c = a;
  }else{
    c = b;
  }
  for(i = 1; i <= c ; i++){
    if ( (a%i == 0)&&(b%i == 0)){
      count = count + 1;
      if (count == k){
        printf("%d",i);
        break;
      }
    }
   }
}