#include<stdio.h>

int main(void)
{
	int a, b, c, d;
	int t;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(a < c && b < d){
		t = b - c;
	}else if(a < c && b > d){
		t = d - c;
	}else if(a > c && b < d){
		t = b - a;
	}else if(a > c && b > d){
		t = d - a;
	}else if(a == c && b < d){
		t = b - a;
	}else{
		t = d - a;
	}
	
	if(t < 0){
		printf("0");
	}else{
		printf("%d", t);
	}
	return 0;
}