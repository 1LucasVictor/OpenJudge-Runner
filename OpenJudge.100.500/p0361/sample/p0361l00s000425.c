#include <stdio.h>

int main(void){
	
	int S; //時間入力
	
	scanf("%d",&S);
	
	int h,m,s;
	
	h = S/3600;
	m = (S%3600)/60;
	s = S%3600%60;
	
	printf("%d:%d:%d\n",h,m,s);
	
	return 0;

}
