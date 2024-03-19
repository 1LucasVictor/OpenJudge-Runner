#include <stdio.h>

int main(void)
{
	int n = 0;
	
	int a[4];
	
	scanf("%d",&n);
	
	a[0] = (n % 10);
	n = n/10;// 1桁目を取り出す
	
	a[1] = (n % 10);
	n = n/10;// 2桁目を取り出す
	
	a[2] = (n % 10);
	n = n/10;// 3桁目を取り出す

	
	switch(a[0]){
		case 0:
			printf("pon");
			break;
		case 1:
			printf("pon");
			break;
		case 2:
			printf("hon");
			break;
		case 3:
			printf("bon");
			break;
		case 4:
			printf("hon");
			break;
		case 5:
			printf("hon");
			break;
		case 6:
			printf("pon");
			break;
		case 7:
			printf("hon");
			break;
		case 8:
			printf("pon");
			break;
		case 9:
			printf("hon");
			break;
	}

	return 0;
}