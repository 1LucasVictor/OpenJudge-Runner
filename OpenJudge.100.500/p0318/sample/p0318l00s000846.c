#include<stdio.h>
#include<string.h>
#define LEN 500001
#define NIL -1

int trance_command(char []);
void insert(int);
int find(int, int);
int minimum(int);
int successor(int);
void delete(int);
void print();
void inorder(int);
void preorder(int);

int P[LEN], L[LEN], R[LEN], Key[LEN];
int root=NIL;

int main()
{
  char command[10];
  int n, id;
  int z=0;
  int i, j, k;

  //intelization
  for(i=0; i<LEN; i++)
    {
      P[i]=NIL;
      L[i]=NIL;
      R[i]=NIL;
      Key[i]=NIL;
    }

  //read
  scanf("%d", &n);
  for(i=0; i<n; i++)
    {
      scanf("%s", command);
      //insert
      if(trance_command(command)==0)
	{
	  scanf("%d", &id);
	  Key[z]=id;
	  insert(z);
	  z++;
	}
      //print
      else if(trance_command(command)==1)
	{
	  inorder(root);
	  printf("\n");
	  preorder(root);
	  printf("\n");
	}
      //find
      else if(trance_command(command)==2)
	{
	  scanf("%d", &id);
	  j=find(root, id);
	  if(j!=NIL)printf("yes\n");
	  else printf("no\n");
	}
      //delete
      else if(trance_command(command)==3)
	{
	  scanf("%d", &id);
	  delete(find(root, id));
	}
    }

  return 0;
}


//-------------------------
//this method is trancing command.
int trance_command(char c[])
{
  if(strcmp(c, "insert")==0)return 0;
  else if(strcmp(c, "print")==0)return 1;
  else if(strcmp(c, "find")==0)return 2;
  else if(strcmp(c, "delete")==0)return 3;
}

void insert(int z)
{
  int y=NIL;
  int x=root;

  while(x!=NIL)
    {
      y = x;
      if(Key[z]<Key[x])x = L[x];
      else x = R[x];
    }
  P[z]=y;

  if(y==NIL)root=z;
  else if(Key[z]<Key[y])L[y]=z;
  else R[y]=z;
}

int find(int x, int key)
{
  while(x!=NIL && key!=Key[x])
    {
      if(key < Key[x])x=L[x];
      else x=R[x];
    }
  return x;
}

int minimum(int x)
{
  while(L[x]!=NIL)x = L[x];
  return x;
}
int successor(int x)
{
  int y;
  if(R[x]!=NIL)return minimum(R[x]);
  y=P[x];
  while(y!=NIL && x==R[y])
    {
      x=y;
      y=P[y];
    }
  return y;
}

void delete(int z)
{
  int y;
  int x = z;
  if(L[x]==NIL || R[x]==NIL)y=z;
  else y=successor(z);

  if(L[y]!=NIL)x=L[y];
  else x=R[y];

  if(x!=NIL)P[x]=P[y];
  if(P[y]==NIL)root=x;
  else if(y==L[P[y]])L[P[y]]=x;
  else R[P[y]]=x;

  if(y!=z)Key[z]=Key[y];
  //return y;
}

void inorder(int t)
{
  if(t!=NIL)
    {
      inorder(L[t]);
      printf(" %d", Key[t]);
      inorder(R[t]);
    }
}

void preorder(int t)
{
  if(t!=NIL)
    {
      printf(" %d", Key[t]);
      preorder(L[t]);
      preorder(R[t]);
    }
}