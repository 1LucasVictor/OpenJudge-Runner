#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a,b,c,i;
	
	while(scanf("%d%d",&a,&b)!=EOF){ 
	
	c=a+b;
	for(i=0;c!=0;i++){
		c/=10;
	}
	printf("%d",i);
	}
	 
	return 0;
}
