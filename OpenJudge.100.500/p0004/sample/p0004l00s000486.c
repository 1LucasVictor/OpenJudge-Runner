#include<stdio.h>
	
int GCD(int a, int b){
	int r;
	
	while((r = a % b) != 0){
		a = b;
		b = r;
	}
	
	return b;
}

int main(){
	int a, b, r, s;
	
	while(scanf("%d%d",&a, &b) != EOF){
		
		r = GCD(a, b);
		s = a / r;
		s = s * b;
		
		printf("%d  %d\n", r, s);
	}
	
	return 0;
}