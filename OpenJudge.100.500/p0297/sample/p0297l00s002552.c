#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

#define M 100000

typedef struct q{
  char name[10];
  int v;
} q;


int head,tail,n;
q Q[M];
q A;


bool isEnpty(){
  if(tail == head) true;
  else false;
}

int min(int a, int b){
  return a<b?a:b;
}

void enqueue(q x){
  Q[tail] = x;
  if(tail+1 == M) tail = 0;
  else tail = tail +1;
}
			  
q dequeue(q *Q){
  q x;
  x = Q[head];
  if(head+1 == M) head = 0;
  else head = head +1;
  return x;
}


int main(){

  int i,value,x,y,total=0,k=0;


  scanf("%d%d",&n, &value);

  head = 1;
  tail = n+1;

  for(i=1;i<=n;i++){
    scanf("%s%d",Q[i].name,&Q[i].v);
  }

  while(head != tail){


    A = dequeue(Q);
    k = min(value,A.v);
    A.v -= k;
    total += k;
    if(A.v > 0) enqueue(A);
    else printf("%s %d\n",A.name,total);
      
  }
  
    
  return 0;
}

