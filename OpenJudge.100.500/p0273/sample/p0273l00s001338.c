#include<stdio.h>
#define N 44

typedef struct node{
  int left;
  int right;
}Node;

Node F[N];

int fibonacci(int);

int main(){

  int i,n;

  scanf("%d",&n);
  printf("%d\n",n);
}