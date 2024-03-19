#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,j,k,m,num,count,len;
	char words[201],stack[201];
	while(1)
	{
		scanf("%s",words);
		if(!strcmp(words,"-")){break;}
		i=0;
		while(1)
		{		
			if(words[i]=='\0'){break;}
			i++;
		}
		scanf("%d",&m);
		count=0;
		for(j=0;j<m;j++)
		{
			scanf("%d",&num);
			count+=num;
		}
		for(j=0;j<201;j++){stack[j]='\0';}
		len=(count%i)*sizeof(char);
		strcpy(stack,words+len);
		for(j=0;j<len;j++){stack[j+i-len]=words[j];}
		printf("%s\n",stack);
	}


	return 0;
}