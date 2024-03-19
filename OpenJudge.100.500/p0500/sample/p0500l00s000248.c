#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
  	int		N;
  	int		M;
  	int		s[5];
  	int		c[5];
  	int		num;
  	int		i;
  	int		j;
  	int		min;
  	int		tmp;
  	char	rev[4];
  	char	ans[3];
  	int		answer;
  
  	num = scanf("%d %d", &N, &M);
    if (num != 2)
      	return (0);
  
  	for (i=1; i<=M; i++)
    {
      	num = scanf("%d %d", &s[i], &c[i]);
      	if (num != 2)
          	return (0);
    }
  
  	for (i=1; i<=M; i++)
      	for (j=i+1; j<=M; j++)
        {
          	if (s[i] == s[j])
              	if (c[i] != c[j])
                {
                  	printf("-1");
          			return (0);
                }
        }

    for (i=0; i<4; i++)
    {
        rev[i] = 0;
    }

    for (i=0; i<3; i++)
    {
        ans[i] = 0;
    }

  	for (j=1; j<=N; j++)
    {
      	min = N + 1;
		for (i=1; i<=M; i++)
		{
	      	if (s[i] < min && s[i] > 0)
	        {
	          	min = s[i];
	          	tmp = i;
	        }
	    }
	    rev[s[tmp]] = c[tmp];
	  	s[tmp] = 0;
    }
    
    answer = 0;
    if (N == 3)
    {
        ans[2] = rev[3] + '0';
        ans[1] = rev[2] + '0';
  	    ans[0] = rev[1] + '0';
  	    answer = atoi(ans);
    }
    else if (N == 2)
    {
        ans[2] = '\0';
        ans[1] = rev[2] + '0';
      	ans[0] = rev[1] + '0';
      	answer = atoi(ans);
    }
    else if (N == 1)
    {
        ans[2] = '\0';
        ans[1] = '\0';
      	ans[0] = rev[1] + '0';
      	answer = atoi(ans);
    }
    else
        ;

  	if (answer < 100 && N > 2)
    {
      	printf("-1");
        return (0);
    }
  	    
  	if (answer < 10 && N > 1)
    {
      	printf("-1");
        return (0);
    }
  
  	if (answer >= 10 && N == 1)
    {
      	printf("-1");
        return (0);
    }
  
  	if (answer >= 100 && N == 2)
    {
      	printf("-1");
        return (0);
    }
  
  	if (answer < 10 && N == 2)
    {
      	printf("-1");
        return (0);
    }
  
  	if (answer < 100 && N == 3)
    {
      	printf("-1");
        return (0);
    }
    
    if (answer == 0 && N > 1)
    {
      	printf("-1");
        return (0);
    }
  
    if (answer < 0)
    {
      	printf("-1");
        return (0);
    }
  
    if (N < 1)
    {
      	printf("-1");
        return (0);
    }
  
    if (N > 3)
    {
      	printf("-1");
        return (0);
    }
  
    if (M < 0)
    {
      	printf("-1");
        return (0);
    }
  
    if (M > 5)
    {
      	printf("-1");
        return (0);
    }
  
  	printf("%d", answer);
  	return (0); 
}