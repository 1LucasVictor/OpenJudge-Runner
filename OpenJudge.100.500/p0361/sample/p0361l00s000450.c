#include <stdio.h>
int main(void) {
	int hour, minute, second;
	hour = minute = 0;
	scanf("%d", &second);
	while(second >= 60) {
		second -= 60;
		minute += 1;
	}
	while(minute >= 60) {
		minute -= 60;
		hour += 1;
	}
	printf("%d:%d:%d\n", hour, minute, second);
	return 0;
}