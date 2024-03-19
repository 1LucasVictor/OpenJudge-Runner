#include<stdio.h>
#include<math.h>
int main()
{
  int i,n,d,c=0;

  scanf("%d%d",&n,&d);

  for(i=0;i<n;i++)
  {
      float j;
    int p,q;
     scanf("%d%d",&p,&q);
     j=sqrt((p*p)+(q*q));
     if(j<=d)
     {
         c++;
     }
  }
printf("%d\n",c);
return 0;
}

