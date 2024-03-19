#include <stdio.h>
#include <string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN];
int head=0, tail=0, n;

void enqueue(P Que){
  strcpy(Q[tail].name,Que.name);
  Q[tail].t=Que.t;
  if (tail+1==LEN) tail=0;
  else tail++;
}

P dequeue(){
  P Que;
  strcpy(Que.name,Q[head].name);
  Que.t=Q[head].t;
  if(head+1==LEN) head=0;
  else head++;

  return Que;
}


int main(){
  int elaps = 0;
   int i,q;
   P u;
  scanf("%d %d", &n, &q);
  
  for ( i = 0; i <n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  
  tail=i;

  while(head!=tail){
   
    u=dequeue();

    if(u.t>q){
      u.t=u.t-q;
      elaps=elaps+q;
      enqueue(u);
    }

    else {
      elaps=elaps+u.t;
      printf("%s %d\n",u.name,elaps); 
    }
  }
      

  
  return 0;
}

