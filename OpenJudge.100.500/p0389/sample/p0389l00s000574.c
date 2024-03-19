#include<stdio.h>
#include<string.h>

int main()
{
	int m,h;
	int i;
	char str[201],head[201],tail[201];

	while(1)
	{
		scanf("%s",str);
		if(!strcmp(str,"-")){break;}
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&h);
			strncpy(tail,str,h);
			tail[h]='\0';
			strcpy(head,str+h);
			sprintf(str,"%s%s",head,tail);
			
		}

		puts(str);		
				
	}

	return 0;
}