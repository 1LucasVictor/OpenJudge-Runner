#include<stdio.h>

int main(void)
{
	int x,i,j;
	scanf("%d",&x);
	int flg=0;
	
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			if(i*j==x){
				flg=1;
			}
			}
		}
	if(flg==0)
		printf("No");
	else
		printf("Yes");
	return 0;
}
		