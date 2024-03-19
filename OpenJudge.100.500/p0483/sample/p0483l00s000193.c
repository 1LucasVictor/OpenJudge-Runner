#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	int temp;
	int flag = 0;
	while(tc != 0)
	{
		temp = tc%10;
		tc /= 10;
		if(temp == 7){
			flag = 1;
			break;
		}
	}
	if(flag == 0) printf("No\n");
	else{
		printf("Yes\n");	
	}
}