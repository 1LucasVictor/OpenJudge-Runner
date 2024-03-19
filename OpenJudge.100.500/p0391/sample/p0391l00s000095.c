#include <stdio.h>
#include <string.h>
int main()
{
  int q,a,b;
  int i,j;
  char str[1001],strcp[1001],ins[8];
  scanf("%s",str);
  scanf("%d",&q);
  for(i=0;i<q;i++)
  {
    scanf("%s %d %d",ins,&a,&b);
    if(!strcmp(ins,"print"))
    {
      for(j=a;j<=b;j++)
      {
    printf("%c",str[j]);
    if(j==b)printf("\n");
      }
    }
    if(!strcmp(ins,"reverse"))
    {
      for(j=0;j<=(b-a)/2;j++)
      {
    char temp = str[a+j];
    str[a+j]=str[b-j];
    str[b-j]=temp;
      }
    }
    if(!strcmp(ins,"replace"))
    {
      char p;
      for(j=0;j<=b-a;j++)
      {
    scanf(" %c",&p);
    str[a+j]=p;
      }
    }
  }
  return 0;
}
