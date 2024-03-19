#include <stdio.h>
void main()
{
  long long int n,a[200000],x;
  int i,j,flag=0;
  scanf("%lld",&n);
  for(i=0;i<n;i++)
  {
	scanf("%lld",&a[i]);
  }
          for(i=0;i<n;i++)
          {
         	x=a[i];
            	for(j=i+1;j<n;j++)
           	 {
             	 if(x==a[j])
                 {
               		 flag=1;
             		break;
                 }
                  goto label;
            }
          }
  label:
          if(flag==1)
          printf("NO");
          else 
          printf("YES");
}