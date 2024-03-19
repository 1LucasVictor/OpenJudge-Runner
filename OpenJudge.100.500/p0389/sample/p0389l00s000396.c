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
		for(k=0;k<201;k++){stack[k]='\0';}
		len=(count%i)*sizeof(char);
		strcpy(stack,words+len);
		strcat(stack,words);
		stack[i*sizeof(char)]='\0';
		printf("%s\n",stack);
	}


	return 0;
}