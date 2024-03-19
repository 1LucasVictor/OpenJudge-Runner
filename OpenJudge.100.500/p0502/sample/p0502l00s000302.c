#include<stdio.h>
int main()
{
int a,j,c;
  c=0;
  scanf("%d",&a);
int b[a];  
  for(j=0;j<a;++j)
  {scanf("%d",&b[j]);
   
  if(b[j]%2==1) c=c+1;
  else if(b[j]%3==0) c=c+1;
  else if(b[j]%5==0) c=c+1;
  }
  if(c==a) printf("APPROVED");
  else printf("DENIED");
return 0;
}