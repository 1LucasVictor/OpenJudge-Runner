/*
 * main.c
 *
 *  Created on: 2020/07/27
 *      Author: 113896
 */
#include <stdio.h>

int main() {

	int time;
	scanf("%d", &time);
	int hour = time / 3600;
	int minute = (time - hour*3600) / 60;
	int second = time - hour*3600 - minute*60;

	printf("%d:%d:%d\n", hour, minute, second);

	return 0;
}


