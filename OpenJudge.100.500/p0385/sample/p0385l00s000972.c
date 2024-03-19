#include <stdio.h>

int main()
{
	int i,j,h,s,num;
	int a = 0;
	
	while(1){
		scanf("%d",&num);
		if(num == 0){
			break;
		}
		s = num/1000;
		num = num - s * 1000;
		h =num/100;
		num = num - h*100;
		j = num/10;
		i = num - j*10;
		a = i + j + h + s;
		printf("%d\n",a);
	}
	return 0;
}