#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main (void)
{
	char str[1000],com[10],p[1000],temp[1000];
	int com_num,i,a,b,j,k,temp_count;
	
	scanf("%s",str);
	scanf("%d",&com_num);
	
	for(i = 0 ; i < com_num ; i++)
	{
		temp_count = 0;
		scanf("%s %d %d",com,&a,&b);
		if(strcmp(com,"replace") == 0)
		{
			scanf("%s",p);
		}
		if(strcmp(com,"print") == 0)
		{
			for(j = a ; j <= b ; j++)
			{
				if(j != b)
				{
					printf("%c",str[j]);
				}
				else
				{
					printf("%c\n",str[j]);
				}
			}
		}
		else if(strcmp(com,"reverse") == 0)
		{
			for(j = a ; j <= b ; j++)
			{
				temp[temp_count] = str[j];
				temp_count++;
			}
			for(j = a ; j <= b ; j++)
			{
				str[j] = temp[temp_count - 1];
				temp_count--;
			}
			for(j = 0 ; j < 1000 ; j++)
			{
				temp[j] = '\0';
			}
		}
		else if(strcmp(com,"replace") == 0)
		{
			for(j = a ; j <= b ; j++)
			{
				str[j] = p[temp_count];
				temp_count++;
			}
		}
	}
	
	
	return 0;
}
