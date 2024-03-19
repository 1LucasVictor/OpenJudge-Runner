#include<stdio.h>
#include<string.h>
 
int main()
{
	char input[201] ;
	char copy[201] ;
	int i;
	int m,r,n;
	
	while(scanf("%s\n",input),strcmp(input,"-"))
	{
		scanf("%d",&m);
		
		n = strlen(input);
		
		for(i = 0;i < m;i++)
		{
			scanf("%d",&r);
			strcpy(copy,&input[r]);
			strncat(copy,input,r);
			input[n] = '\0';
			
			strcpy(input,copy);
		}
		
		printf("%s\n",input);

  }
  return 0;
}
