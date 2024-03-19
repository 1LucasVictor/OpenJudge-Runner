#include<stdio.h>
#define SIZE 200
int main()
{
  char data[SIZE];
  int sort[SIZE],x[SIZE];
  int i,j,h,m,length;
  int end=0;
  while(1)
    {
      for(i=0;i<SIZE;i++)
	{
	  scanf("%c",&data[i]);
	  if(data[i]=='\n')
	    {
	      if(i==0) i--;
	      else break;
	    }
	}

      length=i; 
      if((i==1)&&(data[0]=='-')) break;

      for(i=0;i<length;i++) sort[i]=i;
      scanf("%d",&m);
      for(i=0;i<m;i++)
	{
	  scanf("%d",&h);
	  for(j=0;j<h;j++) x[j]=sort[j];
	  for(j=h;j<length;j++) sort[j-h]=sort[j];
	  for(j=0;j<h;j++) sort[length-h+j]=x[j];
	}
      for(i=0;i<length;i++) printf("%c",data[sort[i]]);
      printf("\n");
    }
  return 0;
}