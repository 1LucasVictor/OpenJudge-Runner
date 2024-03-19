#include<stdio.h>
int main()
{
  int s[13],h[13],c[13],d[13],i,r,x;
  char type;
  for(i=0; i<13; i++)
    {
      s[i]=h[i]=c[i]=d[i]=0;
    }
  scanf("%d",&r);
  for(i=0; i<r*2; i++)
    {
      scanf("%c %d",&type,&x);
      if(type=='S') s[x-1]=1;
      if(type=='H') h[x-1]=1;
      if(type=='C') c[x-1]=1;
      if(type=='D') d[x-1]=1;

    }
  for(i=0; i<13; i++)
    {
      if(s[i]==0) printf("S %d\n",i+1);
    }
  for(i=0; i<13; i++)
    {
      if(h[i]==0) printf("H %d\n",i+1);
    }
  for(i=0; i<13; i++)
    {
      if(c[i]==0) printf("C %d\n",i+1);
    }
  for(i=0; i<13; i++)
    {
      if(d[i]==0) printf("D %d\n",i+1);
    }
  return 0;
}