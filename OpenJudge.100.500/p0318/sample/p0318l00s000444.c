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

struct node bi[N];

void insert(int z)
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

void pre(int now)
{
  printf(" %d",bi[now].key);
  if(bi[now].left!=-1)  pre(bi[now].left);
  if(bi[now].right!=-1)  pre(bi[now].right);
}

void in(int now)
{
  if(bi[now].left!=-1) in(bi[now].left);
  printf(" %d",bi[now].key);
  if(bi[now].right!=-1) in(bi[now].right);
}


void print()
{
  in(0);
  printf("\n");
  pre(0);
  printf("\n");
}

int find(int key,int flag)
{
  int i=0;
  while(1)
  {
    if(bi[i].key==key)
    {
      if(flag==1)printf("yes\n");
      return i;
    }
    if(bi[i].pare==-1) break;
    i = bi[i].pare;
  }
//  printf("start:%d num:%d\n",i,bi[i].key);
  while(1)
  {
    if(bi[i].key<key)
    {
      i=bi[i].right;
      if(i==-1)
      {
        printf("no\n");
        return -1;
      }
    }
    else
    {
      i=bi[i].left;
      if(i==-1)
      {
        printf("no\n");
        return -1;
      }
    }
    if(bi[i].key==key)
    {
      if(flag==1)printf("yes\n");
      return i;
    }
  }
}

void delete(int key,int flag)
{
  int i;
  int pare,left,right;
  if(flag==-1)
  {
    i = find(key,0);
  }
  else
  {
    i = flag;
  }
  pare = bi[i].pare;
  left = bi[i].left;
  right = bi[i].right;
  if(left==-1 && right==-1)
  {
    if(bi[pare].key>key)
    {
      bi[pare].left=-1;
    }
    else
    {
      bi[pare].right=-1;
    }
  }
  else if(left!=-1 && right==-1)
  {
    bi[left].pare = pare;
    if(bi[pare].key>key)
    {
      bi[pare].left=left;
    }
    else
    {
      bi[pare].right=left;
    }
  }
  else if(left==-1 && right!=-1)
  {
    bi[right].pare = pare;
    if(bi[pare].key>key)
    {
      bi[pare].left=right;
    }
    else
    {
      bi[pare].right=right;
    }
  }
  else
  {
    bi[i].key = bi[left].key;
    delete(bi[left].key,left);
  }
}


int main(void)
{
  int n,i;
  int num;
  char comm[10];
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
      insert(num);
    }
    else if(strcmp(comm,"find")==0)
    {
      scanf("%d",&num);
      find(num,1);
    }
    else if(strcmp(comm,"delete")==0)
    {
      scanf("%d",&num);
      delete(num,-1);
    }
    else
    {
//      printf("print\n");
      print();
    }
  }
  return 0;
}