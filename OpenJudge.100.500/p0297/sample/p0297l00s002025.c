#include <stdio.h>
#include <string.h>

typedef struct {
  char name[100];
  int t;
}A;

A Q[1000000];
A P[1000000];
int head, tail, n;

int isEmpty(){
  if(head == tail)return 1;
  else return 0;
}

void queue(A x){
  Q[tail] = x;
  tail++;
}

void initialize(){
  head = 0;
  tail = n+1;
}


int main(){
  int i, q, count=1, tmp=0, c;
  
  scanf("%d%d",&n,&q);
  int a[n+1];
  
  for(i=1; i<=n; i++)
    P[i].t = 0;

  for(i=1; i<=n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  initialize();

  i=1;

  while(count != n+1){
    if(Q[i].t > q){
      Q[i].t=Q[i].t-q;
      tmp += q;
      queue(Q[i]);
      i++;
    }
    else if(Q[i].t<=q){
      tmp += Q[i].t;
      P[count].t=tmp;
      strcpy(P[count].name, Q[i].name);
      i++;
     
      count++;
    }
  }

  for(i=1; i<=n; i++)
    printf("%s %d\n",P[i].name,P[i].t);
    
  return 0;
}
  

