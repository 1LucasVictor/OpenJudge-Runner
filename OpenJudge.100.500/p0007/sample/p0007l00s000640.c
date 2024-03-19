#include<stdio.h>
int main()
{
  int result;
  int i,j;
  int n;
  while(scanf("%d",&n)!=EOF)
    {
      result=0;
      for(i=0;i<10;i++)
	{
	  if((n-i<0)||(n-i>27)) continue;
	  for(j=0;j<10;j++)
	    {
	      if((n-(i+j)<0)||(n-(i+j)>18)) continue;
	      if(n-(i+j)<10) result+=n-(i+j)+1;
	      else result+=19-n+(i+j);
	    }
	}
      printf("%d\n",result);
    }
  return 0;
}