#include<stdio.h>

#include<string.h>

#define ARRAY 100000

int min(int x, int y) {

  if(x < y)
    return x;
  else
    return y;
 
}

typedef struct judge{

  char name[10];

  int t;

}P;


P Q[ARRAY+1];

int head, tail, n;


void enqueue(P x){

  Q[tail] = x;

  if ( tail == ARRAY ) tail = 1;

  else tail++;

}


P dequeue(){

  P x = Q[head];

  if ( head == ARRAY ) head = 1;

  else head++;

  return x;

}


int main(){

  int flag = 0,i,p,q;

  P s;

  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++) scanf("%s %d", Q[i].name, &Q[i].t);

  head = 1; tail = n+1;

  while( head != tail ){

    s = dequeue();

    p = min(q, s.t);

    s.t -= p;

    flag += p;

    if ( s.t > 0 )
      enqueue(s);

    else {

      printf("%s %d\n",s.name, flag);

    }

  }



  return 0;

}