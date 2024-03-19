#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
	int i,j;
	int h,w;

	for(;;){
		// Input
		scanf("%d %d",&h, &w);
		// Finish Check
		if( h == 0 && w == 0 ){
			break;
		}
		// Output
		for(i=1;i<=h;i++){
			for(j=1;j<=w;j++){
				if( i==1 || i==h || j==1 || j==w ){
					printf("#");
				} else {
					printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}