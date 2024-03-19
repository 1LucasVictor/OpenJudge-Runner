#include<stdio.h>
int main(void)
{
int second;
int time;
int minute;

//printf("?§?=");
scanf("%d",&second);

time=second/3600;
minute=(second-time*3600)/60;
second=second % 60	;

printf("%d:%d:%d\n",time,minute,second);

return 0;
}