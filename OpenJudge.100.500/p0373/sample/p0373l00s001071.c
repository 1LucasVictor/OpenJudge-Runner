
#include <stdio.h>

int main()
{
	int i,k;
	int a,b;
	while(1){
		scanf("%d %d", &a, &b);
		if(a==0&&b==0){
			break;
		}
		else if(a>=3&&a<=300&&b<=300){
			for(i=0; i<a; i++){
				for(k=0; k<b; k++){
					if(i==0||i==a-1){
						printf("#");
					}
					else if(k==0||k==b-1){
						printf("#");
					}
					else{
						printf(".");
					}
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	return 0;
}