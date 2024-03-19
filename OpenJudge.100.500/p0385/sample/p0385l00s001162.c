#include<stdio.h>
int main(void)
{
	char ch[1001];
	int sum,i;
	while(1){
		scanf("%s",ch);
		if(ch[0] == '0') break;
		sum = 0; i = 0;
		while(ch[i]){
		sum += ch[i] - '0';
		i++;
		}
		printf("%d\n",sum);
	}
	return 0;
}