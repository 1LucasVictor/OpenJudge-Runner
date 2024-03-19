#include <stdio.h>

int main (void)
{
	//変数宣言
	int stomach,bought,ate,delicious_limit,safe_limit;//入力
	char str[64]; //標準入力読み取り用
	
	//標準入力読み込み
	fgets(str,sizeof(str),stdin);
	sscanf(str,"%d %d %d",&stomach,&bought,&ate);
	
	delicious_limit = bought - ate;
    safe_limit = delicious_limit + stomach;
	
	//出力
	if(delicious_limit >= 0)
	{
		puts("delicious");
	}else if (safe_limit >= 0)
	{
		puts("safe");
	}else
    {
    	puts("dangerous");
    }
	
	return 0;
}