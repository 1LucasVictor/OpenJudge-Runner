#include <stdio.h>

int main() 
{
    char ch;
    int i,j=0,k;
    for(i=0;(ch=getchar())!='\n';i++)
    {
    	if(ch=='7')
    	{
    		j=1;
    		break;
		}
	}
	if(j==1)
	  printf("Yes");
	  else printf("No");
	return 0;
}
