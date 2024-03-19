#include<stdio.h>

int main(){
	int a, b, c, f, N, i;
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		f = 0;
		scanf("%d %d %d", &a, &b, &c);
		if(a*a == c*c+b*b){
			f = 1;
		}
		if(b*b == c*c+a*a){
			f = 1;
		}
		if(c*c == a*a+b*b){
			f = 1;
		}
		if(f == 1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
	
}