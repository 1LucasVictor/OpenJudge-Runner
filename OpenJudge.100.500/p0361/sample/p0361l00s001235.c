/*
氏名：鈴木丈人
学籍番号：190441067
概要：時間の変換プログラム
*/
#include<stdio.h>
int main(void)
{
	int seconds;   //秒
	int minutes;   //分
	int hours;     //時

	scanf("%d", &seconds);   //秒入力
	hours = seconds / 3600;   //時間を求める
	minutes = (seconds / 60) % 60;   //分を求める
	seconds = seconds - hours * 3600 - minutes * 60;   //秒を求める
	printf("%d:%d:%d\n", hours, minutes, seconds);   //表示

	return 0;   //終わり
}
