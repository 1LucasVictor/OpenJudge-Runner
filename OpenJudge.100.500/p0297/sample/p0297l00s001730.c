#include <stdio.h>
#include <string.h>

typedef struct{

  char n[10];
  int t;

}P;
 
void enqueue(P);
P dequeue(void);

int min(int a,int b){
  if(a >= b)
    return b;
  else return a;
}

int head,tail,n;

P Q[100000];
 
int main(){
  int q, i, total = 0, c;
  P u;
 
  scanf("%d%d", &n, &q);

  for( i = 0; i < n; i++)
    scanf("%s%d", Q[i].n, &Q[i].t);
 
  head = 0;
  tail = n;
 
  while( head != tail){

    u = dequeue();
    c = min( q, u.t);
    u.t -= c;
    total += c;

    if( u.t > 0)
      enqueue( u);
    else
      printf("%s %d\n", u.n, total);

  }

  return 0;
}
 
void enqueue(P x){

  Q[tail] = x;

  if(tail == n)
    tail = 0;

  else
    tail++;

}
 
P dequeue(void){
  P x;
  x = Q[head];
 
  if(head == n)
    head = 0;

  else
    head++;
 
 return x;
}
 