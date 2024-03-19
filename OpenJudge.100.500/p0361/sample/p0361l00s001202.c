#include<stdio.h>
int main(void){
	int time,hour,minute,second;
	scanf("%d",&time);
	hour = (int)(time/3600);
	minute = (int)((time-hour*3600)/60);
	second = time-hour*3600-minute*60;
	printf("%d:%d:%d\n",hour,minute,second);
	return 0;
}