#include<stdio.h>
int main(void){
int a,b,c,d,e,k;

  
  	scanf("%d",&a);
   	scanf("%d",&b);
   	scanf("%d",&c);
   	scanf("%d",&d);
   	scanf("%d",&e);
   	scanf("%d",&k);
  	
    if((b-a)>k){
        	printf(":(\n");
        }
  else if((c-b)>k){
        	printf(":(\n");
        }
       else if((d-c)>k){
        	printf(":(\n");
        }
      else if((e-d)>k){
        	printf(":(\n");
        }else{
  	  printf("Yay!\n");
      }

  

	return 0;
}