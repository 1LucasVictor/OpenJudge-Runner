#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <inttypes.h>

int main(void){
	int x,y;

	scanf("%d %d",&x,&y);
	if(y%2==1){
		printf("No");
		return 0;
	}else{
		if(x*2>y){
			printf("No");
			return 0;
		}else if(x*4<y){
			printf("No");
			return 0;
		}
		printf("Yes");
	}
	return 0;
}
