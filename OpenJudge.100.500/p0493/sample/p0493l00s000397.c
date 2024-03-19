#include<stdio.h>
#include<math.h>

int main(void){
 	int num=0;
  	int ans=0;
  	int co500=0;
  	int	co5=0;
  	scanf("%d",&num);
  	ans=num;
	co500=ans/500;
  	ans=ans%500;
	co5=ans/5;
  	int re=co5*5+co500*1000;
  printf("%d",re);
  
  
  
}
