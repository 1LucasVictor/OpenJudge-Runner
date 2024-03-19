#include <stdio.h>

int main(){
	int x,y;
	while(1){
		scanf("%d %d",&x,&y);
		if(x == 0 && y == 0) break;
		for(int i = 0; i < x; i++){   //縦のループ
			for(int j = 0; j < y; j++){  //横のループ
				if(i == 0 || i == x-1){  //1行目とx行目を全て#にする
				printf("#");
				}
				else if(i != 0 && i != x-1 && j == 0 || j == y-1){  //1行目、x行目以外の1列目とy列目を全て＃にする
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
