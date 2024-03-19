#include<stdio.h>
#include<string.h>

char q[10][10];
int book[10],b,a,c,l[20],m[20],n[10];

void abc(int);

int main()
{
  int i,j;
    
  scanf("%d",&b);
  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      q[i][j]='.';
  for(i=0;i<b;i++)
    {
      scanf("%d%d",&a,&c);
      q[a][c]='Q';
      book[c]=1;
      l[a+c]=1;
      m[a-c+8]=1;
      n[a]=1;
    }
  
  abc(0);
  
  return 0;
}


void abc(int p)  
{
  int i;
  
  if(n[p]==1)
    abc(p+1);
  if(p==8)
    {
      for(i=0;i<8;i++)
	printf("%s\n",q[i]);
      return;
    }
  
  for(i=0;i<8;i++)
    {
      if(book[i]==0&&l[p+i]==0&&m[p-i+8]==0)
	{
	  book[i]=1;
	  l[p+i]=1;
	  m[p-i+8]=1;
	  q[p][i]='Q';
	  abc(p+1);
	  book[i]=0;
	  l[p+i]=0;
	  m[p-i+8]=0;
	  q[p][i]='.';
	}
    }
}

