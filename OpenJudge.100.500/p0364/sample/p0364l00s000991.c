#include <stdio.h>
#include <stdlib.h>
int main(){
	int W,H,x,y,r,i[5];
	char c,suuti[5][20];
	int a,b;
	for( a = 0;a < 5;a++){

		for( b = 0;b < 19 && (c =getchar()) != ' ' && c != '\n';b++){
			suuti[a][b] = c;
		}suuti[a][b] = 0;
		i[a] = atoi(suuti[a]);
	}suuti[a][b] = 0;
	W = i[0];
	H = i[1];
	x = i[2];
	y = i[3];
	r = i[4];
	if(r <= W-x && r <= x && r <= H-y && r <= y){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	return 0;
}