#include<stdio.h>

int	main()
{
  int	N,M;
  int	i,j;
  
  scanf("%d %d\n",&N,&M);
  
  int s[M],c[M],flag,flag2,ans; 
  ans = 0;
  flag=0;
  i=-1;
  while (++i<M)
  {
    scanf("%d %d\n",&s[i],&c[i]);
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
    flag2 = 0;
    i = -1;
    while (++i < M)
    {
      if (s[i] == 1)
        flag2 = 1;
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
    if (!flag2)
    {
      if (N == 3)
        ans += 100;
      if (N == 2)
        ans += 10;
      if (N == 1)
        ans += 1;
    }
    printf("%d\n",ans);
  } 
  return (0);
}