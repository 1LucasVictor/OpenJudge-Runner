#include <stdio.h>

#define MAX 1000

int isTriangle(int a,int b,int c){
	if(a*a == b*b + c*c){
		return 1;
	}else{
		return 0;
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
			if(isTriangle(x,y,z)) printf("YES");
			else printf("NO");
			
		}else if(y > x && y > z){
			if(isTriangle(y,x,z)) printf("YES");
			else printf("NO");
			
		}else{
			if(isTriangle(z,y,x)) printf("YES");
			else printf("NO");
			
		}
	}
	
	return 0;
}