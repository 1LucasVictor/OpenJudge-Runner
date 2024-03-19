#include<time.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int n,m=0;
char str[1050],print[105][1050];

void scf(char scfcommand[20],int scfa,int scfb)
{
	int i,len,j;
	char s,p[1050];
	if(strcmp(scfcommand,"print")==0)
	//if(scfcommand=="print")
	{
		for(i=0;i<=scfb-scfa;i++)
		{
			
			print[m][i]=str[i+scfa];
			//printf("%c",scfcommand[i]);
		}
		m++;
	}
	if(strcmp(scfcommand,"reverse")==0)
	//if(scfcommand=="reverse")
	{
		
		j=scfb;
		len=scfb-scfa+1;
		len/=2;
		
		for(i=scfa;i<=scfa+len-1;i++)
		{
			
			s=str[i];
			str[i]=str[j];
			str[j]=s;
			j--;
		}
	}
	if(strcmp(scfcommand,"replace")==0)
	//if(scfcommand=="replace")
	{
		scanf("%s",p);
		j=0;
		for(i=scfa;i<=scfb;i++)
		{
			str[i]=p[j];
			j++;
		}
	}
	return;
}
int main()
{
	int a,b,i,j;
	char command[20];
	scanf("%s",str);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",command);
		scanf("%d %d",&a,&b);
		scf(command,a,b);
	}
	for(i=0;i<=m-1;i++)
		puts(print[i]);
		
	
	return 0;
}
