#include <stdio.h>
#include <math.h>
#define swap(a,b) a^=b^=a^=b

int main(){
	
	int N, a, b, c, i;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%d %d %d", &a, &b, &c);
		
		if(c == sqrt(a*a+b*b) || b == sqrt(c*c+a*a) || a == sqrt(b*b+c*c)){
			printf("YES\n");
		} else printf("NO\n");
		
	}
	
	return 0;
}