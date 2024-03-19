#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=999){
		n=n%100;
		n=n%10;
	}
	if(n==2||n==4||n==5||n==7||n==9) printf("hon\n");
	if(n==0||n==1||n==6||n==8) printf("pon\n");
	if(n==3) printf("bon\n");
	return 0;
}