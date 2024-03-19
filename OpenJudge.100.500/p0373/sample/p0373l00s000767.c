#include<stdio.h>

int main(){
	int H,W;
	while(1){
		scanf("%d",&H);
		scanf("%d",&W);
		if(H==0 && W==0)break;
		make_frame(H,W);
	}
	return 0;
}

int make_frame(int height,int width){
	int i,j;
	for(i=1;i<=height;i++){
		for(j=1;j<=width;j++){
			if(i==1 || i==height) printf("#");
			else if(j==1 || j==width) printf("#");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}