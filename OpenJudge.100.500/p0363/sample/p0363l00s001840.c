#include<stdio.h>

int main(void)
{
	
	int a, b, c, x;
	
    scanf("%d %d %d",&a, &b, &c);
    
    if(a > b){
    	x = a;
    	a = b;
    	b = x;
    };
    
    
    if(b > c){
    	x = c;
    	c = b;
    	b = x;
    };
    
    
    if(a > b){
    	x = a;
    	a = b;
    	b = x;
    };
    
    printf("%d %d %d\n", a, b, c);
    
    return 0;
}