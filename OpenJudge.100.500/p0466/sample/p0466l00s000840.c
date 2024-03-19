#include<stdio.h>
#include<string.h>
int main()
{
	char arr[15],str[15];
	scanf("%s",arr);
	scanf("%s",str);
	int ln=strlen(arr);
	char sur[15];
	str[ln]='\0';
	int res=strcmp(arr,str);
	if(res==0)
	{
		printf("Yes\n");
	}
	else

	{
		printf("No\n");
	}
}