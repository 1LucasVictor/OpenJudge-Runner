#include <stdio.h>

int GCD(int, int);
int LCM(int, int);

int main(){
	int a, b, x, y;
	while(scanf("%d %d", &a, &b) != EOF){
		printf("%d %d\n", GCD(a, b), LCM(a, b));
	}
	return 0;
}

int GCD(int s, int t){
	if(s%t == 0){
		return t;		
	}else{
		return GCD(t, s%t);
	}
}

int LCM(int s, int t){
	return s/GCD(s, t)*t;
}