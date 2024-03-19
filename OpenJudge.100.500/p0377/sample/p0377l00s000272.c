#include<stdio.h>

int n;
int i;
int j;
int x;

char c;
int hoge[4][13];

main(){
	scanf("%d",&n);
	for(i=0; i<2*n; i++){
		scanf("%c %d",&c,&x);
		switch(c){
			case 'S':hoge[0][x-1]=x;
			break;
			case 'H':hoge[1][x-1]=x;
			break;
			case 'C':hoge[2][x-1]=x;
			break;
			case 'D':hoge[3][x-1]=x;
			break;
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<13; j++){
			if(hoge[i][j]== 0){
					switch(i){
						case 0:printf("S %d\n",j+1);
						break;
						case 1:printf("H %d\n",j+1);
						break;
						case 2:printf("C %d\n",j+1);
						break;
						case 3:printf("D %d\n",j+1);
						break;
					}
			}
		}
	}
return 0;
}