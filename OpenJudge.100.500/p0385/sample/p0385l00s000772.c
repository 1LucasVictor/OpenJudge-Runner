#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000];
	int s,i,n;
	int sum;
	
	while(1){
	scanf("%s",str);
	if(str[0] == '0')
	break;
	sum = 0;
	
	for(n = 0;n < strlen(str);n++)
	
		
	sum += str[n] - '0';
	printf("%d\n",sum);
	}
	
	return 0;
}
