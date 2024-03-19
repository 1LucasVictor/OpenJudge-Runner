#include <stdio.h>
int main(void)
{
	int k,d1,d2;
  scanf("%d",&k);
	scanf("%d%d",&d1,&d2);	/* 入力部分 */
  
if(d1%k==0||d2%k==0||(d2-d1)/k!=0)
{
printf("OK");
}else{
  printf("NG");
}
	return 0;
}