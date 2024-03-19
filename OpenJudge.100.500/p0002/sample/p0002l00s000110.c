#include <stdio.h>

int main(void){
	int N , i , a , b , c , buf;
	scanf("%d" , &N);
	for(i=1;i<=N;i++){
		scanf(" %d %d %d" , &a , &b , &c);
		if(a>c){
			buf = c;
			c = a;
			a = buf;
		}else if(b>c){
			buf = c;
			c = b;
			b = buf;
		}
		if(a*a + b*b == c*c) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}