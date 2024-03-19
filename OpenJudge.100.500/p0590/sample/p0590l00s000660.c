#include<stdio.h>
int main(void){
int a,b,c,d,e,k;
 
  
  	scanf("%d",&a);
   	scanf("%d",&b);
   	scanf("%d",&c);
   	scanf("%d",&d);
   	scanf("%d",&e);
   	scanf("%d",&k);
  	
    if((b-a)>=k){
        	printf(":(");exit(0);
        }
      if((c-b)>=k){
        	printf(":(");exit(0);
        }
      if((d-c)>=k){
        	printf(":(");exit(0);
        }
      if((e-d)>=k){
        	printf(":(");exit(0);
        }
  	printf("Yay!");
 
  
 
	return 0;
}