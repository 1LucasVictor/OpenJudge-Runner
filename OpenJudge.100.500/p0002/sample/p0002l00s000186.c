#include <stdio.h>

void right_triangle(int, int, int);

int main(){
	int N, a, b, c, i;
	scanf("%d", &N);
	for(i=0; i<N; ++i){
		scanf("%d %d %d", &a, &b, &c);
		right_triangle(a, b, c);
	}
	return 0;
}

void right_triangle(int x, int y, int z){
	int tmp;
	if(x > z){				//sort
		tmp = z;
		z = x;
		x = tmp;
	}
	if(y > z){
		tmp = z;
		z = y;
		y = tmp;
	}

	if(z*z == x*x+y*y){			
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}