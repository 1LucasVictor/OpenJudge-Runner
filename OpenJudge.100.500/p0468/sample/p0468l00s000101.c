#include<stdio.h>

int main(void){
	char x;
	scanf("%c",&x);
	printf("%c", x);
	scanf("%c",&x);
	int y=0,tmp=0;
	for(int i=0;i<6;i++){
		y++;
	}
	while(y){
		for(int i=0;i<11;i++){
			tmp++;
		}
		y--;
	}
	if((int)x != tmp){
		printf("B");
	}
	else{
		int out=0;
		y=0;

		for(int i=0;i<8;i++){
			y++;
		}
		while(y){
			for(int i=0;i<10;i++){
				out++;
			}
			y--;
		}
		out++;
		out++;
		printf("%c",(char)out);
	}
	scanf("%c",&x);
	printf("%c\n", x);
	return 0;
}
