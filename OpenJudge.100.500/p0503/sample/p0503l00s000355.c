#include<stdio.h>
void main()
{
  int i,j,c=0;
	long long int n;
  scanf("%d",&n);
  long long int a[n];
  for (i=0;i<n;i++)
    scanf("%d",&a[i]);
  for (i=0;i<n;i++)
  {
    for (j=i+1;j<=n;j++)
    {
    	if (a[i]==a[j])
          c++;
    }
  }
  if (c!=0)
    printf("NO");
  else
    printf("YES");
}
