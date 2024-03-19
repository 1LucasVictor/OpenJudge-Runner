#include<stdio.h>

int markForInt(char c){
	int n;
	if(c == 'S'){
		n = 0;
	}else if(c == 'H'){
		n = 1;
	}else if(c == 'C'){
		n = 2;
	}else if(c == 'D'){
		n = 3;
	}
	return n;
}
char intForMark(int n){
	char c;
	if(n == 0){
		c = 'S';
	}else if(n == 1){
		c = 'H';
	}else if(n == 2){
		c = 'C';
	}else if(n == 3){
		c = 'D';
	}
	return c;

}

int main()
{
	int n;
	int cards[4][13];
	int i, j;
		
	scanf("%d", &n);
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 13; ++j){
			cards[i][j] = 0;
		}
	}
	
	for(i = 0; i < n; ++i){
		char mark;
		int num;
		scanf(" %c %d", &mark, &num);
		cards[markForInt(mark)][num - 1] = 1;
	}
	
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 13; ++j){
			if(cards[i][j] == 0)printf("%c %d\n", intForMark(i), j + 1);
		}
	}

	return 0;
}