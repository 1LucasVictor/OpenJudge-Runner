#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000];
	char operation[10];
	int operation_number = 0;
	int a = 0,b = 0, i = 0;
	char p[1000],tmp;
	scanf("%s",str);
	scanf("%d",&operation_number);

	while(operation_number > 0)
	{
		scanf("%s %d %d",operation,&a,&b);
		if(strcmp(operation, "replace" ) == 0)
		{
			scanf("%s",p);
		}
		if(strcmp(operation, "print") == 0)
		{
			while(a <=b)
			{
				printf("%c",str[a]);
				if(a==b)
					printf("\n");
				a++;
				
			}
		}
		else if(strcmp( operation, "reverse") == 0)
		{
			while(a <=b)
			{
				tmp = str[b];
				str[b]= str[a];
				str[a] = tmp;
				b--;
				a++;
				
			}
		}
		else if(strcmp(operation, "replace") == 0)
		{
			i = 0;
			while(a <=b)
			{
				str[a] = p[i];
				a++;
				i++;
				
			}
		}
		operation_number--;
}
	
	return 0;
}

