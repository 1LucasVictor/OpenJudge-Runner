#include <stdio.h>
#include <string.h>

int main(void)
{
  	char	s[200002];
  	char	t[200002];
  	int		i;
  	int		len;
  	int		cnt;
  
  	scanf("%s", s);
  	scanf("%s", t);
  
  	len = strlen(s);
  	cnt = 0;
  	for(i=0; i<len; i++)
    {
      	if(s[i] != t[i])
        {
          	cnt++;
        }
    }
  	printf("%d", cnt);
  	return (0);
}