#include <stdio.h>
 
int main(void) {
	int a,b;
	scanf("%d%d",&a,&b);
	if(b%2==1){printf("No");}
	else if(a*2>b){printf("No");}
	else if(a*4<b){printf("No");}
	else{printf("Yes");}
	return 0;
}