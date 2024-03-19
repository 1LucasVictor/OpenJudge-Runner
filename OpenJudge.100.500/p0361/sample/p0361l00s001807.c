#include <stdio.h>

int main(void)
{
	
	//与えられる秒S
	int S;
	
	//時間、分、秒
	int hr, min, sec;
	
	scanf("%d", & S);
	
	hr = S / 3600;
	
	S = S % 3600;
	
	min = S / 60;
	
	S = S % 60;
	
	sec = S;
	
	//出力
	printf("%d:%d:%d\n", hr, min, sec);
	
	return 0;
}