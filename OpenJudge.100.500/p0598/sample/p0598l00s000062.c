#include<stdio.h>

int main(){
	int A,B,c;
	scanf("%d%d",&A,&B);
	c = B % A;
	if(c == 0) 
	 printf("%d\n",A + B);  
	else
	 printf("%d\n",B - A);  

	return 0;
}