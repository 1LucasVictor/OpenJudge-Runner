#include<stdio.h>

int main(void)
{
	int max, dur, min;
	int temp;

	scanf("%d %d %d", &max, &dur, &min);

	if (min > dur){
		temp = min;
		min = dur;
		dur = temp;
	}
	if (dur > max){
		temp = max;
		max = dur;
		dur = temp;
	}
	if (min > max){
		temp = max;
		max = min;
		min = temp;
	}

	printf("%d %d %d", min, dur, max);

	putchar('\n');

	return 0;

}