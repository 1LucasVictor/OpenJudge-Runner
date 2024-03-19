#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100000

int h,t,A1[N];
char A2[N][10];

void enqueue(char *s, int x)
{
  int i = 0;

  if(isFull()){
    fprintf(stderr,"overflow!\n");
    exit(2);
  }

  A1[t] = x;
  strcpy(A2[t],s);
  if(t + 1 == N) t = 0;
  else t++;
}

int dequeue()
{
  int x;

  if(isEmpty()){
    fprintf(stderr,"underflow!\n");
    exit(1);
  }

  x = h;
  if(h + 1 == N) h = 0;
  else h++;
 
  return x;
}

int isEmpty()
{
  return h == t;

}

int isFull()
{
  return h == (t + 1) % N;
}

void roundschedule(int n, int m)
{
  int i,num,a;
  int total = 0;
  char B[10];

  for(i=0;i<n;i++){
    scanf("%s%d",B,&num);
    enqueue(B,num);
  }

  while(!isEmpty()){
    num = dequeue();
    if(m>=A1[num]){
      total += A1[num];
      printf("%s %d\n",A2[num],total);
    }
    else{
      a = A1[num] - m;
      total += m;
      enqueue(A2[num],a);
    }
  }
}

int main()
{
  int n,m;
  scanf("%d%d",&n,&m);
  roundschedule(n,m);

  return 0;
}

