#include <stdio.h>

int main(void){
	int a,b,c,ab,abc,k,ck;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &k);
	ab = a + b;
	abc = a + b + c;
	ck = a - (k - ab);
	
	if(a >= k){
		printf("%d", k);
	}else{
		if(ab >= k){
			printf("%d", a);
		}else{
			printf("%d", ck);
		}
	}
	
	return 0;
}