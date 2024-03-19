#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int i,d,n,last=0;
	char s[12];
	char (*C)[12]=malloc(sizeof(char)*1000000*12);
	scanf ("%d",&n);
	while(n--)
	{
		scanf("%s",s);
		if(!strcmp(s,"insert"))
		{
			scanf("%s",C[last++]);
		}
		else
		{
			scanf("%s",s);
			i=0;d=0;
			while(strcmp(C[i],s))
			{
				if(i++==last){d=1;break;}
			}
			if(d){printf("no\n");}
			else{printf("yes\n");}
		}
	}
	free(C);

	return 0;
}