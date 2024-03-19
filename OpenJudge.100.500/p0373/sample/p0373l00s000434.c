#include<stdio.h>
int rectangle(int tate,int yoko);
int main(void){
	int H[1000],W[1000],a,j;
	j=0;
	while(1){
		scanf("%d %d",&H[j] ,&W[j]);
			if((H[j]==0)&&(W[j]==0)){
			break;
	}
		j++;
	}
	for(a=0;a<j;a++){
		rectangle(H[a],W[a]);
		printf("\n");
	}
	return 0;
}
	
	int rectangle(int tate,int yoko){
		int h,i;
		for(h=0;h<tate;h++){
			for(i=0;i<yoko;i++){
				if((h>0)&&(h<tate-1)&&(i>0)&&(i<yoko-1)){
					printf(".");
				}
				else{
					printf("#");
				}
			}
			printf("\n");
		}
		return 0;
	}
	
