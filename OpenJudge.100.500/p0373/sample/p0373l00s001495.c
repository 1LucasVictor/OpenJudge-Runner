#include <stdio.h>
int main(){
	int h,w,i,j;
	while(1){
		scanf("%d %d\n",&h,&w);
		if(h==0 && w==0)	break;
		for(i=1;i<=h;i++){
			for(j=1;j<=w;j++){
				if(i==1 || i==h ||j==1 || j==w){
					printf("#");
				}else{
					
						printf(".");
				}

			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
