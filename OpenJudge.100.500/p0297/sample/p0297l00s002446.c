#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

int isEmpty(){
  if( head ==tail) return 1;
  else return 0;
}

void enqueue(P x){
  Q[tail] = x;
      tail++;
}

P dequeue(){
  P x;
  if(isEmpty()) fprintf(stderr, "underflow\n");
  x = Q[head];
  if(head+1 == LEN) head=0;
  else head++;
  return x;
}

void initialize(){
  head = 0;
  tail = n+1;
}
  
int main(){
  int count = 1, c,tmp=0;
  int i, q;
  scanf("%d %d", &n, &q);
  P u[n+1];
  int a[n+1];

for(i =1 ;i<=n ;i++){
    u[i].t = 0;
    }
  
  for (i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  initialize();
  
  i=1;
  while(count != n+1){
    if(Q[i].t >q){
      Q[i].t=(Q[i].t - q);
      tmp += q;
      enqueue(Q[i]);
      i++;
    }
    else if(Q[i].t <=q) {

      tmp +=Q[i].t;
      u[count].t=tmp;
      strcpy(u[count].name ,Q[i].name);
      i++;
      count++;
	}
  }
  for(i =1 ;i<=n ;i++){
  printf("%s %d\n",u[i].name,u[i].t);
  }
  return 0;
}

