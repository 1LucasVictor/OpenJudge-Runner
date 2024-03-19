#include <stdio.h>

int main(void){
	int h,a,k,l; 
  	scanf("%d %d",&h,&a);
  	k=h/a;
  	l=h%a;
  	if(l>0){k++;}
  	printf("%d",k);
}