#include<stdio.h>
#include<string.h>
int main()
{
  char S[10];
  char T[11];
  int sl, tl,i,flag = 1;
  scanf("%s %s", S,T);
  i=0;
  sl = strlen(S);
  tl = strlen(T);
  if(tl == sl +1)
  	while(flag && i<sl)
  	{
  		if(S[i] != T[i])
  			flag=0;
  		i++;
    }
  else
  	flag = 0;
  if (flag)
  	printf("Yes");
  else
  	printf("No");
}
