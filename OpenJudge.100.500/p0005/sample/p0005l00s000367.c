#include<stdio.h>
int main(void)
{
	char ch[100];
	int i, j;
	scanf("%s", ch);
	for(i = 0;ch[i];i++){}
	for(j = i-1;ch[j];j--){
		printf("%c",ch[j]);
	}
	printf("\n");

	return 0;

}