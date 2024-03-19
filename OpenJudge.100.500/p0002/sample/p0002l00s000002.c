#include <stdio.h>

int main(){
	int a, b, c, N, i;

	scanf("%d",&N);
	for(i = 0; i < N; i++){
		scanf("%d %d %d",&a, &b, &c);
		if(chk(a, b, c)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

int chk(int a, int b, int c){
	int x;

	if(a >= b){
		x = a;
		a = b;
		b = x;
	}

	if(b >= c){
		x = b;
		b = c;
		c = x;
	}

	if(a >= b){
		x = a;
		a = b;
		b = x;
	}

	if(c*c == a*a + b*b) return 1;
	else return 0;
}