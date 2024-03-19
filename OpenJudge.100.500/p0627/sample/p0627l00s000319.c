#include<stdio.h>
int main(){
	int x, y, a, b, c;
	scanf("%d %d",  &x, &y);
	if( x == 0 && y==0){
		printf("%d",x);
	}
	a = x + y;
    b = x - y;
    c =  x / y;
    if ( a> b &&a>c){
    	printf("%d",a);
	}else if(b>a && b>c){
		printf("%d",b);
	}else{
		printf("%d",c);
	}
	return 0;
}