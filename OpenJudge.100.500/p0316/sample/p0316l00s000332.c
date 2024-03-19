#include <stdio.h>
#include <string.h>
#define N 500000
int count;

struct node
{
  int key;
  int pare;
  int left;
  int right;
};

void insert(struct node bi[],int z)
{
  int x,y;
  int num=0;

  y=-1;
  x=bi[0].key;
//  printf("while start\n");
  while(1)
  {
    if(x==-1) break;
    y = num;
    if(z<x)
    {
      num = bi[num].left;
      if(num!=-1) x = bi[num].key;
      else
      {
        x=-1;
      }
    }
    else
    {
      num = bi[num].right;
      if(num!=-1) x = bi[num].key;
      else
      {
        x=-1;
      }
    }
  }
//  printf("while end\n");
  bi[count].pare=y;
  bi[count].key=z;

  if(y==-1)
  {
    bi[0].key=z;
  }
  else if(z<bi[y].key)
  {
    bi[y].left = count;
  }
  else
  {
    bi[y].right = count;
  }

  count++;
}

void pre(struct node bi[],int now)
{
  printf(" %d",bi[now].key);
  if(bi[now].left!=-1)  pre(bi,bi[now].left);
  if(bi[now].right!=-1)  pre(bi,bi[now].right);
}

void in(struct node bi[],int now)
{
  if(bi[now].left!=-1) in(bi,bi[now].left);
  printf(" %d",bi[now].key);
  if(bi[now].right!=-1) in(bi,bi[now].right);
}


void print(struct node bi[])
{
  in(bi,0);
  printf("\n");
  pre(bi,0);
  printf("\n");
}

int main(void)
{
  int n,i;
  int num;
  char comm[10];
  struct node bi[N];
  count=0;

  for(i=0;i<N;i++)
  {
    bi[i].key = -1;
    bi[i].pare = -1;
    bi[i].left = -1;
    bi[i].right = -1;
  }
//  printf("set ok\n");

  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
//    printf("comm:");
    scanf("%s",comm);
//    printf("comm:%s\n",comm);
    if(strcmp(comm,"insert")==0)
    {
//      printf("scan:");
      scanf("%d",&num);
      insert(bi,num);
    }
    else
    {
//      printf("print\n");
      print(bi);
    }
  }
  return 0;
}