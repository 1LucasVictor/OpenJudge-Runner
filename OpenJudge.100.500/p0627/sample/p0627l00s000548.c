#include <stdio.h>

int main(){
    int a,b,c,d,e;
 
	
    scanf("%d", &a);
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    e = a * b;
    
	if(c>d && c>e){
	printf("%d",c);
	}
	if(d>c && d>e){
	printf("%d",d);
	}
	if(e>d && e>c){
	printf("%d",e);
	}
}