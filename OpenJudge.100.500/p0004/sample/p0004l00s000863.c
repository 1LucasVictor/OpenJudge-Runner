#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a=0;
	int b=0;
	while(scanf("%d%d", &a, &b)!=EOF){ 
	int init_a = a;
	int init_b = b;
	int gcd=0;
	int i=0;
	int temp;
	for(i=0; i<a+b; i++){
		temp = b;
		b = a%b;
		a = temp;
		if(b == 0){
			gcd = a;
			break;
		}
	}
	int lcm = init_a/gcd*init_b;
	printf("%d %d\n", gcd, lcm);
} 
}
