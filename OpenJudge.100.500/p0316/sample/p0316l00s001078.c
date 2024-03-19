#include<stdio.h>
#include<string.h>
#define LEN 4000000
#define NIL -1

int trance_command(char []);
void insert(int);
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
      else
	{
	  inorder(root);
	  printf("\n");
	  preorder(root);
	  printf("\n");
	}
    }

  return 0;
}


//-------------------------
//this method is trancing command.
int trance_command(char c[])
{
  if(strcmp(c, "insert")==0)return 0;
  else if(strcmp(c, "print"))return 1;
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