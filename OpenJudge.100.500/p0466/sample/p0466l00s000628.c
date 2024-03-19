#include<stdio.h>
int main()
{
	char s[10],t[11];  
  	scanf("%s",s);
  	scanf("%s",t);
  	int count=0,c=0,c1=0;
  	for(int i=0;s[i]!='\0';i++)
    {
      	count++;
      	if(s[i]==t[i])
        {
          	c++;
        }
    }
  	for(int i=0;t[i]!='\0';i++)
    {
      	c1++;
    }
  	if(count==c && c1==c+1)
    {
      printf("Yes\n");
    }
  	else
    {
      printf("No\n");
    }
             return 0;
}  