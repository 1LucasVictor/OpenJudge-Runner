#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
	int i,j;
	char str[1000],cmd[10],p[1000],temp[1000];
	char pri[] = "print", rev[]= "reverse", rep[] = "replace";
	int q,a,b;

	scanf("%s", str);
	scanf("%d", &q);
	
	for(i = 0; i < q; i++)
	{
		scanf("%s", cmd);

		if (strcmp(cmd,pri) == 0)
		{
			scanf("%d %d", &a, &b);
			strncpy(temp, str + a, b-a+1);
			temp[b - a + 1] = '\0';

			for(j = 0; j < b-a+1; j++)
			{
				printf("%c", temp[j]);
			}
			printf("\n");

		}else if (strcmp(cmd,rev) == 0)
		{
			scanf("%d %d", &a,&b);

			for(j = 0; j <= b - a; j++)
			{
				temp[j] = str[b - j];
			}
			for(j = 0; j <= b-a; j++)
			{
				str[a + j] = temp[j];
			}

		}else if (strcmp(cmd,rep) == 0)  //ok
		{
			scanf("%d %d %s", &a,&b,p);
			for(j = 0; j <= b-a; j++)
			{
				str[j + a] = p[j];
			}
		}
		
	}


	return 0;
}