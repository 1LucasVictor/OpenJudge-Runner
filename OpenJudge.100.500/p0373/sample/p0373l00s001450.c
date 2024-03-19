#include<stdio.h>

main(){
	int h, w, i, j;
	while(1){
		scanf("%d%d",&h,&w);
		
		if(h<3&&w<3)break;
		
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				if(i==0||i+1==h||j==0||j+1==w)printf("#");
				else printf(".");
			}
			printf("\n");
		}
		
		printf("\n");
	}
	return 0;
}