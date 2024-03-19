#include <stdio.h>

int main(void)
{
	int flg=0,data[10];
	
	while(scanf("%d",&data[flg])!=EOF){
	
		if(data[flg]==0){
			printf("%d\n",data[flg-1]);
			flg=flg-1;
		}
		else if(data[flg]!=0){
			flg++;
		}
	}
	
	return 0;
}