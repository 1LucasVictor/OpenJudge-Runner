#include<stdio.h>
#include<string.h>
int main()
{
	char c,str[1000],order[10],buf[1000],data[1000];
	int q,a,b,i,j,k=0;
	char *res;
	scanf("%s",str);
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%s",order);
		if(strcmp(order,"print")==0)
		{
			scanf("%d %d",&a,&b);
			strncpy(buf,a+str,b-a+1);
			buf[b-a+1]='\0';
			puts(buf);
		}
		

		if(strcmp(order,"replace")==0)
		{
			scanf("%d %d %s",&a,&b,data);
			strncpy(a+str,data,b-a+1);
			data[0]='\0';
		}

		if(strcmp(order,"reverse")==0)
		{
			scanf("%d %d",&a,&b);
			while(a<b)
			{
               			c=str[a];
                		str[a]=str[b];
                		str[b]=c;
                		a++;
                		b--;
			}
		}
	}
	return 0;
}

//まぐろーりん離散数学
//アルゴリズムパズル