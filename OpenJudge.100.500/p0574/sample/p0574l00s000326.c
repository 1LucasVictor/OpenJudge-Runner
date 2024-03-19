#include<stdio.h>
int main()
{
	
	long long int n,c;

	char str[5];
		scanf("%s",str);
	
	if((str[0]^str[1])==0 || (str[1]^str[2])==0 || (str[2]^str[3])==0 )
		printf("Bad\n");
	else
		printf("Good\n");

	
	return 0;
}




