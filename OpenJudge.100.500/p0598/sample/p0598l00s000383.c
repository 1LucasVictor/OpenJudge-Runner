#include<stdio.h>

int main(){
	int a,b,c;
	
  	scanf("%d",&a);

  	scanf("%d",&b);
  	
	
 	if(b % a == 0){
		c = a + b;
    }else{
		c = b - a;
    }
  
  	printf("%d",c);
	return 0;
  
}

