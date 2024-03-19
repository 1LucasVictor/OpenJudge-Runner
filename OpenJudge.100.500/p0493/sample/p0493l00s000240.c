#include <stdio.h>

int main (){
	
	int n,c=0 ;
	scanf ("%d",&n);
	while (n>= 500){
		n-=500;
		c+=1000;
	}
		while (n>= 5){
		n-=5;
		c+=5;
	}
	printf ("%d",c);
	return 0 ;
}
