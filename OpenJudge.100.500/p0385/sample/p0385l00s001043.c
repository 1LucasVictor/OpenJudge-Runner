#include <stdio.h>
int main(void)
{
	int i,sum;
	char num[1000];
	while(1){
		scanf("%s",num);
		sum=0;
		i=0;
		while(num[i] != '\0'){
			sum+=num[i]-'0';
			i++;
		}
		if(sum==0) break;
		printf("%d\n",sum);
	}
    return 0;
}