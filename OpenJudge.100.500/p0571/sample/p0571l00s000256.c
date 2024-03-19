#include <stdio.h>

int main(void) {
	int a,b,c;
	int ans; 
	scanf("%d %d %d",&a,&b,&c);
	ans = a*b;
	if(ans <c){
	    printf("%d",ans);
	}else{
	    printf("%d",c);
	}
	return 0;
}

