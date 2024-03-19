#include <stdio.h>

int main(){
    int a,b,c,d,e,f;

 
    scanf("%d", &a);
    scanf("%d", &b);
	if((a == 0) && (b==0)){
	
	printf("0");
}
	
	else{
	c = a + b;
    d = a - b;
    e = a * b;
    
    
	if((c>d) && (c>e))
	printf("%d",c);
	
	if((d>c) && (d>e))
	printf("%d",d);
	
	if((e>d) && (e>c))
	printf("%d",e);
	
	if((c==d))
	printf("%d",d);
	
	if((d==e))
	printf("%d",d);
	
	if((e==c))
	printf("%d",c);
	
	
	
	}
	
	return 0 ;
	
}