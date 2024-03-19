#include <stdio.h>
#include <string.h>
#include <math.h>


long tmp[10];

int main(){
	int X,Y;
	int x[10];
		scanf("%d%d",&X,&Y);
	/*
	a+b=X
	2a+4b=Y

	b=X-a
	
	2a+4X-4a=Y
	
	4X-2a=Y
	4X-Y=2a
	*/
	if(Y%2==0){
		int a = (4*X-Y)/2;
		
		if(a<0){
			printf("No\n");
			return 0;
		}
		else printf("Yes\n");
	}
	else {
		
		printf("No\n");	
	}
	return 0;
}
