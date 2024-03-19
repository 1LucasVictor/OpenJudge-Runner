#include <stdio.h>

int main(void)
{
	int week,money=100000,i; //千の桁が基準
	int tmp;
	
	scanf("%d",&week);
	for(i=0;i<week;i++)
	{
		money=money*1.05;
		tmp=money%1000; //999以下が出てくるか
		if(tmp>0)
			{
				money=money+1000-tmp;
			}
	}
	printf("%d\n",money);
	return 0;
}