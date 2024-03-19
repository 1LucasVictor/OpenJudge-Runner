#include <stdio.h>
 
int main(void){
	
	int a,b,c,x;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(a > c || a + b < c){
		printf("NO\n");
	} else {
		printf("YES\n");
	}
	
	return 0;
}
