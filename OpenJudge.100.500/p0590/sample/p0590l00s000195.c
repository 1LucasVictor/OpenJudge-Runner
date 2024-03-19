#include<stdio.h>

int main(void){

int a,b,c,d,e;
int k;	//check
int less=0;

  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&e);
  scanf("%d",&k);
//E
  if(e-d>k)
      less=1;
  if(e-c>k)
    less=1;
  if(e-b>k)
    less=1;
  if(e-a>k)		
    less=1;	
  //D
  if(d-c>k)
      less=1;
  if(d-b>k)
    less=1;
  if(d-a>k)
      less=1;	
   //C
    if(c-b>k)
      less=1; 
  if(c-a>k)
      less=1;	
  //B
  	if(b-a>k)
      less=1;	
  
  if(less==1)
      printf(":(\n");  
  else if(less==0)
         printf("Yay!\n");

return 0;

}