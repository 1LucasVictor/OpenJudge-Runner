#include <stdio.h>

#define MAX 1000

void isTriangle(int a,int b,int c){
	if(a*a == b*b + c*c){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}

int main(void){
	int n;
	int i;
	int x,y,z;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d%d%d", &x, &y, &z);
		
		if(x > y && x > z){
			isTriangle(x,y,z);
		}else if(y > x && y > z){
			isTriangle(y,x,z);
		}else{
			isTriangle(z,y,x);	
		}
	}
	return 0;
}