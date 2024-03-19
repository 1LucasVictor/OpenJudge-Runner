#include<stdio.h>
int main(){
	
	int a, b, hasil;
	scanf("%d %d",&a, &b);
	
	hasil=a/b;

		if(a%b!=0 || b>a)
			printf("%d\n", hasil+1);
		else
			printf("%d\n", hasil);
		
			
	
	return 0;
}