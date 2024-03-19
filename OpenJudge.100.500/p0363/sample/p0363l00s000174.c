#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a < b){
		d = b;
		e = a;
	}
	else {
		d = a;
		e = b;
	}
	if(d < c){
		f = e;
		e = d;
		d = c;
	}
	else if(e < c){
		f = e;
		e = c;
	}
	else{
		f = c;
	}
	
	printf("%d %d %d\n",f ,e, d);
	
	return (0);
}