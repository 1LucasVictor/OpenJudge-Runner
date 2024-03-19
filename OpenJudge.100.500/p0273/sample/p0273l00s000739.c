#include <stdio.h>

int F[100];

int fibonacci(int n){

	if(n == 0 || n == 1) return F[n] = 1;
    if(F[n] != -1) return F[n];
	F[n] = fibonacci(n-2) + fibonacci(n-1);
	return F[n];
}



int main(void){

	int n,i;
	for(i=0;i<100;i++){ 
		F[i] = -1;
	}
	
	scanf("%d",&n);
	printf("%d\n",fibonacci(n));

return 0;

}

