#include<stdio.h>

int main(){	
	int Num, zikan, hun, byou;
	
	scanf("%d", &Num);
	
	zikan =  Num / 3600;
	Num -= zikan * 3600;
	hun =  Num / 60;
	Num -= hun * 60;
	byou = Num;
	
	printf("%d:%d:%d\n", zikan, hun, byou);
	return 0;
}