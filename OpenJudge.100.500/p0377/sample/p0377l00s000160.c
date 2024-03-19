#include<stdio.h>
void init(int[4][13]);
int toSuitInt(char);
char toSuitChar(int);
void showMissing(int[4][13]);
int main(void)
{
  char c;
  int i,n,x;
  int isHere[4][13];
  init(isHere);
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf(" %c %d",&c,&x);
      isHere[toSuitInt(c)][x-1]=1;
    }
  showMissing(isHere);
  return 0;
}
void init(int isHere[4][13])
{
  int i,j;
  for(i=0;i<4;i++)
    for(j=0;j<13;j++)
      isHere[i][j]=0;
}
int toSuitInt(char c)
{
  switch(c)
    {
    case 'S':
      return 0;
    case 'H':
      return 1;
    case 'C':
      return 2;
    case 'D':
      return 3;
    }
  return -1;
}
char toSuitChar(int x)
{
  switch(x)
    {
    case 0:
      return 'S';
    case 1:
      return 'H';
    case 2:
      return 'C';
    case 3:
      return 'D';
    }
  return '\0';
}
void showMissing(int isHere[4][13])
{
  int i,j;
  for(i=0;i<4;i++)
    for(j=0;j<13;j++)
      if(isHere[i][j]==0) printf("%c %d\n",toSuitChar(i),j+1);
}
