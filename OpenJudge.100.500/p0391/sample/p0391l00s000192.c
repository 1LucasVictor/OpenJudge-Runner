#include<stdio.h>
int main()
{
  int i,j,k,n,x,y;
  char str[1000];
  char rev[1000];
  char command[10];
  int length;

  i=0;
  while(1)
    {
      scanf("%c",&str[i]);
      if(str[i]=='\n') break;
      i++;
    }
  length=i;

  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      j=0;
      while(1)
	{
	  scanf("%c",&command[j]);
	  if((j==0)&&(command[j]=='\n')) j--;
	  if(command[j]==' ') break;
	  j++;
	}
      switch(command[2])
	{
	case 'p':
	  scanf("%d %d ",&x,&y);
	  for(j=x;j<=y;j++) scanf("%c",&str[j]);
	  break;
	case 'v':
	  scanf("%d %d",&x,&y);
	  for(j=x;j<=y;j++) rev[j]=str[j];
	  for(j=x;j<=y;j++) str[j]=rev[x+y-j];
	  break;
	case 'i':
	  scanf("%d %d",&x,&y);
	  for(j=x;j<=y;j++) printf("%c",str[j]);
	  printf("\n");
	}
    }
  return 0;
}