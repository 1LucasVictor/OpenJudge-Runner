#include<stdio.h>
#include<string.h>
#define MAX 100000
#define LEN 100005


typedef struct pp{
  char name[100];
  int t;
}P;

void enqueue(P);
P dequeue(void);
int isEmpty(void);
int isFull(void);


P Q[LEN+1];
int head, tail, n;


void enqueue(P x){
  if(isFull()==1){
    printf("error! overflow");
  }
  Q[tail]=x;
  if(tail+1==MAX) tail=0;
  else tail++;
}

P dequeue(void){
  P a1;
  if(isEmpty()==1){
    printf("error! underflow");
  }
  a1=Q[head];
  if(head+1==MAX) head=0;
  else head++;
  return a1;

}

int isFull(void){
  if((head==tail+1)%MAX) return 1;
  else return 0;
}
int isEmpty(void){
  if(head==tail) return 1;
  else return 0;
}

int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head=1;
  tail=n+1;
  while(n!=0){
    u=Q[head];
    u.t=Q[head].t-q;
    if(u.t>0){
      elaps=elaps+q;
      enqueue(u);
      Q[head]=dequeue();
    }
    else{
      elaps=elaps+Q[head].t;
      printf("%s %d\n",u.name,elaps);
      Q[head]=dequeue();
      n--;
    }
  }


  
  return 0;
}