#include<stdio.h>

int	main()
{
  int	N,M;
  int	i,j;
  
  scanf("%d %d",&N,&M);
  
  int s[M],c[M],flag,ans; 
  flag=0;
  ans = 0;
  i=-1;
  while (++i<M)
  {
    scanf("%d %d",&s[i],&c[i]);
    j=-1;
    while (++j<i)
    {
      if (s[i]==s[j])
      {
        if (c[i]!=c[j])
          flag=1;
      }
    }
  }
  if (N >=2)
  {
    i = -1;
    while(++i<M)
    {
      if(s[i] == 1 && c[i] ==0)
        flag=1;
    }
  }
  
  if (flag)
    printf("-1");
  else
  {
    i = -1;
    while (++i < M)
    {
      j = -1;
      flag = 0;
        while (++j < i)
        {
          if (s[i] == s[j])
            flag = 1;
        }
      if (!flag)
      {
      	if (s[i] == 1)
        	ans += c[i] * 100;
	      if (s[i] == 2)
    	    ans += c[i] *10;
 	     if (s[i] == 3)
    	    ans += c[i];
      }
    }
    printf("%d",ans);
  } 
  return (0);
}
