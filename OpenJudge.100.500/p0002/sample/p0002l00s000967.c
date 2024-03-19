#include<stdio.h>
int main()
{
  int n,i,x;
  double r[1000][3];
  scanf("%d",&n);
  for(i=0; i<n; i++)
    {
      scanf("%lf%lf%lf",&r[i][0],&r[i][1],&r[i][2]);
    }
  for(i=0; i<n; i++)
    {
      if(r[i][1]>r[i][0])
	{
	  x=r[i][0];
	  r[i][0]=r[i][1];
	  r[i][1]=x;
	}
      if(r[i][2]>r[i][0])
	{
	  x=r[i][0];
	  r[i][0]=r[i][2];
	  r[i][2]=x;
	}
      if(r[i][0]*r[i][0]==r[i][1]*r[i][1]+r[i][2]*r[i][2]) printf("YES\n");
      else printf("NO\n");
    }
  return 0;
}