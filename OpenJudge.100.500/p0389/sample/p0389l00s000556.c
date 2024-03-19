#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main (void)
{
	char input[200];
	char before_shuffle[200],after_shuffle[200];
	char result[10][200];
	int loop_count,shuffle_count,data_num;
	int i,j;
	
	data_num = 0;
	
	for(i = 0 ; i < 200 ; i++)
	{
		input[i] = '\0';
		before_shuffle[i] = '\0';
		after_shuffle[i] = '\0';
		for(j = 0 ; j < 10 ; j++)
		{
			result[j][i] = '\0';
		}
	}
	
	while(1)
	{
		scanf("%s",input);
		if(strcmp(input,"-") == 0)
		{
			break;
		}
		scanf("%d",&loop_count);
		for(i = 0 ; i < loop_count ; i++)
		{
			scanf("%d",&shuffle_count);
			strncpy(before_shuffle,input,shuffle_count);
			strncpy(after_shuffle,&input[shuffle_count],200-shuffle_count);
			strcat(after_shuffle,before_shuffle);
			strcpy(input,after_shuffle);
			
			for(j = 0 ; j < 200 ; j++)
			{
				before_shuffle[j] = '\0';
				after_shuffle[j] = '\0';
			}
		}
		strcpy(result[data_num],input);
		data_num++;
	}
	for(i = 0 ; i < data_num ; i++)
	{
		printf("%s\n",result[i]);
	}
	return 0;
}
