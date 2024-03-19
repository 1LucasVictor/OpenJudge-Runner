#include<stdio.h>
int main(){
        int H,W,j,i;
        
        scanf("%d %d",&H,&W);
        
        while(1){
        	//HとWの値が0の時抜ける
        	if(H == 0 && W == 0){
        	   break;
        	}
        	//iがH以下の間
        	for(i = 1;i <= H;i++){
        		if(i == 1 || i == H){
        			for(j = 1;j <= W;j++){
        				//全て#を出力する
        				printf("#");
        			}
        				printf("\n");
        		}
        		
        	else{
        	//jがw以下の間
        	for(j = 1;j <= W;j++){
        		if(j == 1 || j == W){
        			//#を出力する
        			printf("#");
        		}
        		else{
        			//.を出力する
        			printf(".");
        		}
        	}
        			printf("\n");
        	}
        	}
        		printf("\n");
        		scanf("%d %d",&H,&W);
        }
        return 0;
}
