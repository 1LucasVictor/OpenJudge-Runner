#include <stdio.h>


int main(){
	int a, b, t, x=0, i=0, k;
	scanf("%i %i %i", &a, &b, &t);
	if(a>t){
		printf("0\n");
		return 0;
	}
	else{
		k=t/a;
		while(k--){
		x=x+b;
		}	
	}
	printf("%i\n", x);

}