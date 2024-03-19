#include<stdio.h>
#include<string.h>
main()
{
	char str[21],rst[21];
	int i,j=0;
	scanf("%s",&str);
	i=strlen(str)-1;
		for(i;i>=0;i--){
		rst[j]=str[i];
		j++;
	}
	rst[j]='\0';
	printf("%s\n",rst);
	return 0;
}