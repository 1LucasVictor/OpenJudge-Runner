#include<stdio.h>
int main()
{
  int p;
  while(scanf("%d",&p)!=EOF)
    {
      int q[p],i;
      q[0]=1;
      q[1]=1;
      for(i=2;i<=p;i++)
	q[i]=q[i-1]+q[i-2];
      printf("%d\n",q[p]);
    }
  return 0;
}
  

