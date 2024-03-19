#include <stdio.h>
#include <string.h>

int main(void)
{
  	char	s[11];
  	char	t[12];
  	int		i;
  	int		si;
  	int		ti;
  
  	scanf("%s\n", s);
  	scanf("%s", t);
  
  	si = strlen(s);
  	ti = strlen(t);
  
  	if (si + 1 != ti)
    {
        printf("No");
      	return (0);
    }
  	else
    {
      	for(i=0; i<ti - 1; i++)
        {
          	if(s[i] != t[i])
            {
              	printf("No");
              	return (0);
            }
        }
      	printf("Yes");
    }
  	return (0);
}