#include <stdio.h>

int main(){
    int a,b,c,d,e,f;

 
    scanf("%d", &a);
    scanf("%d", &b);
    if(a<= -1000 && b<= 1000){
    	printf("Eror");
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
	
	if(c,d,e == 0)
	printf("0");
	
	
	}
	
	return 0 ;
	
}