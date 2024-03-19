#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 2000

typedef struct {
  char name[10];
  int t;
} process;
int head=0, tail=0;
process queue[M+1];

void put(process p){
  queue[tail++]=p;
  tail%=M;
}

process get(void){
  head %= M;
  return queue[head++];
}

int empty(){
  return head%M==tail;
}

int main(void){
  int i, n, q, t, total=0;
  char *name;
  scanf("%d %d", &n, &q);
  process p[n];
  name=malloc(sizeof(char));
  for(i=0; i<n; i++){
    scanf("%s %d", p[i].name, &p[i].t);
    put(p[i]);
  }
  while(!empty()){
    process p=get();
    if((p.t-q)<=0){
      total+=p.t;
      printf("%s %d\n", p.name, total);
    }else{
      total+=q;
      p.t-=q;
      put(p);
    }
  }
}