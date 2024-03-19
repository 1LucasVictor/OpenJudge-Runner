#include<stdio.h>
#include<string.h>

#define LEN 100005
#define MAX 100000
typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head=0, tail=0, n;

void enqueue(P x){
  Q[tail] = x;
  if((tail+1)==MAX){
    tail=0;
  }else{
    tail++;
  }
}

P dequeue(){
  P x;
  x=Q[head];
  if((head+1)==MAX){
    head=0;
  }else{
    head++;
  }
  return x;
}


int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);
  
  for ( i = 1; i <= n; i++){
    scanf("%s", u.name);
    scanf("%d", &u.t);
    enqueue(u);
    //printf("1");
  }
  
  while(head != tail){
    //printf("while\n");
    if(Q[head].t-q<=0){
      //printf("if\n");
      elaps+=Q[head].t;
      printf("%s %d\n",Q[head].name,elaps);
      dequeue();
  }else if(Q[head].t-q>0){
      //printf("else if\n");
      elaps+=q;
      Q[head].t=Q[head].t-q;
      enqueue(dequeue());
    }
  }
  return 0;
}