#include <stdio.h>
int main()
{
	char s[3],a=0,b=0;
  	int i;
  	scanf("%s",s);
  	for(i=0;i<3;i++)
    {
		if(s[i]=='A')
          a++;
      
      	else 
          b++;
    }
  	if(a>0 && b>0)
      printf("Yes");
  
  	else 
      printf("NO");
  return 0;
}