#include<stdio.h>

#define FREE -1
#define NOTFREE 1
#define QUEEN 12
#define NOQUE 2

int A[8][8];
int tate[8],yoko[8],nanalef[8*2-1],nanarig[8*2-1];

void reset(void);
void print(void);
void recursive(int);

void reset(void)
{
  int i;

  for(i=0;i<8;i++) {
    tate[i] = FREE;
    yoko[i] = FREE;
  }

  for(i=0;i<8*2-1;i++) {
    nanalef[i] = FREE;
    nanarig[i] = FREE;
  }
}

void print(void)
{
  int i,j;
  
  for(i=0;i<8;i++) {
    for(j=0;j<8;j++) {
      if(A[i][j] == QUEEN) {
	if(tate[i] != j)
	  return;
      }
    }
  }
  
  for(i=0;i<8;i++) {
    for(j=0;j<8;j++) {
      if(tate[i] == j) {
	printf("Q");
      }else{
	printf(".");
      }
    }
    printf("\n");
  }
}

void recursive(int a)
{
  int i;
    
  if(a == 8) {
    print();
    return;
  }

  for(i=0;i<8;i++) {
    if(yoko[i] == NOTFREE ||
       nanalef[a+i] ==  NOTFREE ||
       nanarig[a-i+8-1] == NOTFREE)
      continue;
    tate[a] = i;
    yoko[i] = nanalef[a+i] = nanarig[a-i+8-1] = NOTFREE;
    recursive(a+1);
    tate[a] = yoko[i] = nanalef[a+i] = nanarig[a-i+8-1] = FREE;
  }
}
    
  
int main()
{
  int k,r,c,i,j;

  reset();
  
  scanf("%d",&k);

  for(i=0;i<8;i++) {
    for(j=0;j<8;j++) {
      A[i][j] = NOQUE;
    }
  }

  for(i=0;i<k;i++) {
    scanf("%d%d",&r,&c);
    A[r][c] = QUEEN;
  }

  recursive(0);

  return 0;
}

