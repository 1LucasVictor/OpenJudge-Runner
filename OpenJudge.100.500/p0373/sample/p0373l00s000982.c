#include<stdio.h>
int main(){

	int h,w,i,j;
	while(1){
		scanf("%d %d",&h,&w);
		if(w==0 && h==0) break;
		for(i=1;i<=h;i++){
			if(i==1 || i==h){
				for(j=1;j<=w;j++){
					printf("#");
				}
			}else{
				printf("#");
				for(j=1;j<=w-2;j++){
					printf(".");
				}
				printf("#");
			}
			printf("\n");
		}
	}
	return 0;
}