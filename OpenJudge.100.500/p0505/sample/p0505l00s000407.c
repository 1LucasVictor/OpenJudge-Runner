#include <stdio.h>

int main(void) {
	long h;
	int n,a;
	
	scanf("%ld %d",&h,&n);
	while(n--){
		scanf("%d",&a);
		h = h-a;
	}
	
	if(h>0)
		printf("No");
	else
		printf("Yes");
	return 0;
}
