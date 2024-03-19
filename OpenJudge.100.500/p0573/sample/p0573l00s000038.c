#include<stdio.h>
int main()
{
	char a[6];
	scanf("%s",a);
	int i,j,l,sum[2];
	sum[0]=1;sum[1]=1;
	for(l=i=0;i<=3;i++)
	  {
	  	if(a[i]==0)
	  	continue;
	  	for(j=i+1;j<=3;j++)
	  	  {
	  	  	if(a[i]==a[j])
	  	  	 {
	  	  	 	sum[l]=sum[l]+1;
	  	  	    a[j]==0;
	  	  	 }
	  	  }
	  	  l=l+1;
	  }
	  if(sum[0]==2&&sum[1]==2)
	  printf("Yes\n");
	  else
	  printf("No\n");
	  return 0;
}