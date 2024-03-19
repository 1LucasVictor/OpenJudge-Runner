#include<stdio.h>
void main()
{
  int n,i,j,c=0,t;
	//int n;
  scanf("%d",&n);
  int a[n];
  for (i=0;i<n;i++)
  { scanf("%d",&a[i]);}
  for (i=0;i<n;i++)
  {
    for (j=i+1;j<=n;j++)
    {
    	if (a[i]>a[j])
        {   t=a[i];
        a[i]=a[j];
        a[j]=t;}
      
    }
    
  }
  for (i=0;i<n;i++)
  {
    for (j=i+1;j<=n;j++)
    {
    	if (a[i]==a[j])
        {    c=1;
         break;}
      
    }
    
  }
  
  if (c!=0)
    {printf("NO");
   }
  else
    printf("YES");
  
}
