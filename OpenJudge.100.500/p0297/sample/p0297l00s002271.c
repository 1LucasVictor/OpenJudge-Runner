#include <stdio.h>
#include <stdlib.h>
#define LEN 100005
#define EMPTY -1
#define FULL -1

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head=1, tail=1, n;

int isFull();
int isEmpty();

void enqueue(P x){
  if(isFull()==FULL){
    fprintf(stderr,"オーバーフロー\n");
    exit(1);
  }
  Q[tail]=x;
  if(tail+1==LEN)
    tail=0;
  else
    tail++;
}

P dequeue(){
  P x;
  if(isEmpty()==EMPTY){
    fprintf(stderr,"アンダーフロー\n");
    exit(2);
  }    
  x=Q[head];
  if(head+1==LEN)
    head=0;
  else 
    head++;
  return x;
   
}

int main(){
  int elaps = 0, c=0;;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
    tail++;        
  }
  while(c!=n){
    u=dequeue();
    if(u.t<=q){
      elaps+=u.t;
      printf("%s %d\n",u.name,elaps);
      c++;      
    }
    else {
      u.t-=q;
      enqueue(u);  
      elaps+=q;    
    }
    
    
  }
  
  return 0;
}


int isEmpty(){
  if(head==tail)return EMPTY;  
  else return 0;
}
int isFull(){
  if(head==(tail+1)%LEN)return FULL;
  else return 0;
}

