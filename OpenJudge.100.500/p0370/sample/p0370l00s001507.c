#include<stdio.h>
#include<stdio.h>

#define MAX 20000

int main(void)
{
  int i,j;
  int a[MAX],b[MAX],cal[MAX];
  char op[MAX];

  for(i=0;i<MAX;i++)
    {
      scanf("%d %c %d",&a[i],&op[i],&b[i]);
      if(op[i]=='?')
	break;
    }
  
  for(j=0;j<i;j++)
    {
      if(op[j]=='+')
	cal[j]=a[j]+b[j];
      else if(op[j]=='-')
	cal[j]=a[j]-b[j];
      else if(op[j]=='*')
	cal[j]=a[j]*b[j];
      else if(op[j]=='/')
	cal[j]=a[j]/b[j];
      
      printf("%d\n",cal[j]);
    }
}

